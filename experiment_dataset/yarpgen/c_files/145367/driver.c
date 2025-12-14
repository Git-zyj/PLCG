#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2666975837U;
unsigned long long int var_1 = 2129562760425837347ULL;
unsigned long long int var_2 = 13602340825577300084ULL;
unsigned short var_3 = (unsigned short)30931;
unsigned long long int var_4 = 4222505884671810242ULL;
unsigned long long int var_5 = 1044706703067984140ULL;
unsigned int var_6 = 3653819222U;
short var_7 = (short)24333;
unsigned int var_8 = 3434009591U;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)21345;
long long int var_12 = -2566867911740005939LL;
int zero = 0;
long long int var_13 = -1310472372611391858LL;
unsigned int var_14 = 830239911U;
short var_15 = (short)-8341;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-15664;
short var_18 = (short)-16760;
unsigned short var_19 = (unsigned short)54857;
unsigned short arr_0 [11] ;
short arr_1 [11] [11] ;
unsigned char arr_4 [11] [11] ;
unsigned char arr_6 [11] [11] ;
short arr_7 [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)23493;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-1449;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)6961;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 2302823517376416811ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
