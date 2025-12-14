#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15785438798206755773ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 9298519634376341528ULL;
unsigned char var_4 = (unsigned char)62;
signed char var_7 = (signed char)-5;
unsigned long long int var_8 = 12312925811493580910ULL;
unsigned int var_9 = 3467937863U;
signed char var_11 = (signed char)39;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 10007042918603085665ULL;
long long int var_15 = 5311841967940188475LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 15280174653468587353ULL;
unsigned long long int var_19 = 6557284091464709242ULL;
unsigned char var_20 = (unsigned char)177;
long long int var_21 = 8516033924735620010LL;
signed char var_22 = (signed char)126;
int var_23 = 884940269;
unsigned short var_24 = (unsigned short)40648;
long long int var_25 = -4049851494332505563LL;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 2823500513U;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 17130609792372901643ULL;
unsigned short var_30 = (unsigned short)13277;
long long int arr_1 [15] ;
unsigned short arr_2 [15] [15] ;
long long int arr_3 [15] [15] ;
_Bool arr_4 [15] [15] [15] ;
unsigned short arr_7 [15] [15] [15] [15] ;
_Bool arr_10 [15] [15] [15] [15] ;
short arr_12 [15] [15] [15] [15] [15] ;
unsigned char arr_19 [18] ;
int arr_23 [18] ;
long long int arr_24 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2756169805936273989LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)52845;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 3277411761919552848LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)3014;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-2578;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned char)84 : (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? -1113377242 : -1934612118;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = 378967239604931360LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
