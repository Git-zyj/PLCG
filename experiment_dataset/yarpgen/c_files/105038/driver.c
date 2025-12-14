#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5921;
long long int var_4 = 8029381388697007248LL;
short var_6 = (short)-24818;
int var_7 = -509202355;
long long int var_8 = 7434679693663737934LL;
unsigned char var_9 = (unsigned char)59;
_Bool var_11 = (_Bool)0;
unsigned char var_14 = (unsigned char)50;
signed char var_15 = (signed char)92;
unsigned int var_16 = 458194897U;
int var_17 = -1067201892;
int zero = 0;
unsigned int var_18 = 2060243168U;
signed char var_19 = (signed char)38;
int var_20 = -1938864094;
unsigned int var_21 = 1584263919U;
unsigned long long int var_22 = 5009438984558318977ULL;
short var_23 = (short)-13857;
unsigned short arr_0 [23] ;
unsigned short arr_1 [23] ;
unsigned char arr_2 [23] ;
unsigned long long int arr_4 [23] ;
unsigned short arr_5 [23] [23] ;
long long int arr_9 [15] [15] [15] ;
short arr_12 [15] [15] [15] [15] ;
unsigned short arr_6 [23] [23] ;
unsigned long long int arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)65531 : (unsigned short)10205;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46940 : (unsigned short)38415;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)6 : (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 5769347725438777540ULL : 1560435345495513386ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)57296 : (unsigned short)35465;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -3891996916322309989LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-20549 : (short)-7158;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)60730 : (unsigned short)64786;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 14950216998348746597ULL : 15219199662539274510ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
