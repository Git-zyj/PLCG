#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 105125050;
signed char var_3 = (signed char)-105;
unsigned int var_4 = 1021575659U;
unsigned long long int var_5 = 4881660953863007646ULL;
unsigned long long int var_6 = 2610649415067746410ULL;
unsigned int var_8 = 2665342344U;
unsigned short var_9 = (unsigned short)7876;
signed char var_10 = (signed char)-21;
unsigned char var_11 = (unsigned char)118;
signed char var_12 = (signed char)102;
int zero = 0;
unsigned char var_13 = (unsigned char)172;
unsigned short var_14 = (unsigned short)60165;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-107;
unsigned short var_17 = (unsigned short)39064;
unsigned int var_18 = 3962276453U;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-38;
unsigned char var_21 = (unsigned char)25;
long long int arr_2 [15] [15] [15] ;
unsigned short arr_5 [15] [15] [15] [15] ;
signed char arr_7 [20] [20] ;
int arr_9 [20] ;
unsigned char arr_12 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -657709741622369185LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned short)37801;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 312447730;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)69;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
