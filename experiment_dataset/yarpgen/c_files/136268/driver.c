#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 461895968U;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)25237;
unsigned char var_8 = (unsigned char)54;
short var_10 = (short)13186;
int zero = 0;
unsigned long long int var_13 = 11776461044800968436ULL;
short var_14 = (short)-11598;
unsigned long long int var_15 = 10118437226942648626ULL;
long long int var_16 = -7413732310963616526LL;
unsigned int var_17 = 2753876029U;
signed char var_18 = (signed char)-40;
int var_19 = 485321591;
unsigned int var_20 = 3049827328U;
unsigned short var_21 = (unsigned short)32008;
long long int arr_0 [18] [18] ;
unsigned short arr_1 [18] ;
long long int arr_2 [18] ;
unsigned long long int arr_3 [18] [18] ;
unsigned char arr_4 [18] [18] [18] ;
unsigned long long int arr_6 [18] [18] ;
long long int arr_12 [14] ;
unsigned int arr_16 [14] [14] [14] ;
unsigned char arr_17 [14] [14] [14] ;
signed char arr_19 [14] [14] [14] [14] ;
int arr_8 [18] [18] [18] [18] ;
unsigned long long int arr_9 [18] [18] ;
short arr_10 [18] ;
unsigned char arr_14 [14] ;
short arr_22 [14] [14] ;
unsigned long long int arr_23 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 4263632759170270383LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)59330;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 9208006289385729051LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 5135744728143377562ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 16551335123023026968ULL : 4963411313873354296ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = 6080054437619002187LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 3923266080U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 91371455 : -106062716;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 15862255343609792551ULL : 1363061659981614490ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (short)-31186;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_22 [i_0] [i_1] = (short)-27000;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_23 [i_0] = 11403741285079943923ULL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
