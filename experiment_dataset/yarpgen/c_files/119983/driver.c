#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11870;
int var_5 = -784712231;
long long int var_7 = -4270064518433542342LL;
signed char var_9 = (signed char)35;
long long int var_10 = 227717476569722709LL;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)56;
int zero = 0;
long long int var_15 = 7077114146105726239LL;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)107;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 12820107738945407421ULL;
unsigned long long int var_21 = 17355290436832278838ULL;
short var_22 = (short)7097;
int var_23 = -567743441;
unsigned long long int var_24 = 1148468425254929010ULL;
unsigned char var_25 = (unsigned char)100;
unsigned long long int var_26 = 10636818945828358143ULL;
unsigned long long int var_27 = 11750020153633585215ULL;
int var_28 = -1610929572;
long long int var_29 = -6429279463797227005LL;
long long int var_30 = 9161709191201135152LL;
unsigned long long int arr_1 [16] [16] ;
long long int arr_7 [23] [23] ;
_Bool arr_8 [23] ;
_Bool arr_5 [11] ;
unsigned long long int arr_10 [23] ;
unsigned char arr_11 [23] [23] ;
long long int arr_14 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 2558057987853220830ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 459558240529047671LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 5367209606833058204ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = -3285352354562058497LL;
}

void checksum() {
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
