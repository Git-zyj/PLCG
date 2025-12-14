#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2056544616;
short var_2 = (short)4378;
unsigned char var_3 = (unsigned char)181;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)118;
unsigned int var_7 = 472929378U;
int var_8 = 1074726952;
signed char var_9 = (signed char)107;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = -1596200672;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)165;
unsigned int var_14 = 3185049839U;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)151;
int var_17 = 1351963162;
unsigned int var_18 = 2540611578U;
int var_19 = -1129256385;
unsigned char var_20 = (unsigned char)253;
unsigned char arr_10 [24] ;
int arr_11 [24] [24] ;
short arr_12 [23] ;
unsigned char arr_13 [23] ;
signed char arr_17 [23] ;
long long int arr_3 [18] ;
unsigned long long int arr_7 [19] ;
int arr_8 [19] [19] ;
int arr_9 [19] ;
unsigned int arr_18 [23] [23] [23] ;
int arr_19 [23] [23] [23] ;
_Bool arr_20 [23] ;
unsigned int arr_21 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = -1189811605;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (short)-23829;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 813986728919208243LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 1778346491758902977ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = 1777179815;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 715770531;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 3156228048U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 93827302;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = 380231069U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
