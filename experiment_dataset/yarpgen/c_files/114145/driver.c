#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29776;
unsigned long long int var_2 = 16553686360903836511ULL;
unsigned short var_4 = (unsigned short)12244;
short var_5 = (short)-26309;
short var_6 = (short)-29417;
_Bool var_7 = (_Bool)0;
int var_9 = -132915821;
unsigned short var_12 = (unsigned short)38620;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3906101402U;
unsigned short var_15 = (unsigned short)36045;
int zero = 0;
short var_16 = (short)6296;
signed char var_17 = (signed char)50;
int var_18 = 2038894510;
unsigned long long int var_19 = 12589342865580506351ULL;
int var_20 = -1828922437;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-15473;
unsigned short var_23 = (unsigned short)50;
unsigned short var_24 = (unsigned short)3970;
long long int arr_0 [13] ;
short arr_3 [23] ;
unsigned long long int arr_5 [23] ;
short arr_2 [13] ;
int arr_6 [23] [23] ;
unsigned char arr_7 [23] ;
short arr_11 [19] ;
short arr_12 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 450232946311703985LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-7008;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 9897909100410007333ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)-28745;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = -2112284418;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (short)11922;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (short)-13760;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
