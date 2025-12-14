#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13664976685926915803ULL;
int var_2 = 1125463673;
unsigned int var_3 = 4158338548U;
int var_4 = -856631704;
long long int var_7 = -4562851941671059538LL;
int var_10 = 1393828086;
int zero = 0;
signed char var_13 = (signed char)4;
unsigned short var_14 = (unsigned short)4161;
unsigned short var_15 = (unsigned short)25384;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)1;
unsigned short var_18 = (unsigned short)45736;
short var_19 = (short)-15039;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-21;
signed char var_22 = (signed char)81;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)33222;
unsigned short var_26 = (unsigned short)59108;
_Bool var_27 = (_Bool)1;
_Bool arr_0 [23] ;
_Bool arr_1 [23] ;
short arr_2 [23] ;
unsigned int arr_3 [23] ;
unsigned int arr_6 [23] ;
signed char arr_7 [23] ;
unsigned int arr_8 [23] ;
unsigned int arr_9 [23] [23] [23] ;
unsigned long long int arr_10 [10] ;
int arr_11 [10] ;
int arr_12 [10] [10] ;
unsigned char arr_4 [23] ;
unsigned int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-3398;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 2067730322U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 1171075413U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 2923536623U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1385132031U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 634837033957444139ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 1461353935;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = -1414466238;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 3513798382U;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
