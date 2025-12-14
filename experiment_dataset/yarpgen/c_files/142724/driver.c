#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11153083302397525680ULL;
unsigned long long int var_1 = 17472672684641735209ULL;
unsigned long long int var_3 = 7662927148323965547ULL;
unsigned long long int var_6 = 3470814557665427040ULL;
unsigned short var_7 = (unsigned short)22569;
int var_10 = 1351657795;
unsigned long long int var_11 = 8115175200158224776ULL;
short var_12 = (short)-29388;
signed char var_13 = (signed char)120;
unsigned long long int var_15 = 6617066720489705277ULL;
unsigned short var_16 = (unsigned short)42961;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)32745;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-31;
long long int var_21 = 2206634530010654515LL;
unsigned char var_22 = (unsigned char)226;
unsigned long long int var_23 = 9482810950594574285ULL;
unsigned int var_24 = 66887410U;
unsigned short arr_1 [23] [23] ;
unsigned long long int arr_2 [23] ;
long long int arr_5 [23] ;
short arr_3 [23] ;
_Bool arr_7 [23] ;
signed char arr_8 [23] [23] ;
signed char arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)10635;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 12287225496012090565ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 592113135815998022LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)24009;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (signed char)20;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
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
