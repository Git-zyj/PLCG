#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2072973308;
int var_3 = 1255898224;
unsigned short var_4 = (unsigned short)30726;
unsigned int var_5 = 1668740226U;
unsigned short var_9 = (unsigned short)59391;
signed char var_10 = (signed char)-110;
int var_13 = 492152977;
unsigned long long int var_14 = 16019254442484698901ULL;
unsigned int var_17 = 2340553945U;
int zero = 0;
unsigned int var_18 = 3656302617U;
short var_19 = (short)8485;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-21119;
signed char var_22 = (signed char)101;
short var_23 = (short)-22688;
short var_24 = (short)27556;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)11826;
unsigned int var_27 = 351992834U;
unsigned char var_28 = (unsigned char)19;
_Bool var_29 = (_Bool)0;
short var_30 = (short)-4258;
int arr_0 [23] [23] ;
signed char arr_1 [23] ;
unsigned long long int arr_2 [23] ;
unsigned short arr_9 [11] ;
unsigned long long int arr_12 [11] ;
short arr_14 [11] [11] [11] [11] ;
long long int arr_5 [23] ;
unsigned char arr_17 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -528152119;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2290324865443012511ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (unsigned short)63421;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 14351928585738453054ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (short)1281;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 8129044000510637699LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)111;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
