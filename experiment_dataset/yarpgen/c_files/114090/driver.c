#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
unsigned int var_1 = 3507097497U;
unsigned int var_2 = 1760275249U;
short var_3 = (short)-6485;
short var_4 = (short)479;
unsigned short var_5 = (unsigned short)30269;
int var_7 = -28286657;
short var_8 = (short)24968;
_Bool var_9 = (_Bool)1;
long long int var_12 = -2773215588459913461LL;
unsigned short var_13 = (unsigned short)34322;
int zero = 0;
unsigned short var_14 = (unsigned short)48362;
unsigned int var_15 = 4276814470U;
unsigned char var_16 = (unsigned char)163;
unsigned short var_17 = (unsigned short)30630;
unsigned char var_18 = (unsigned char)0;
unsigned long long int var_19 = 5256401905916744348ULL;
unsigned short var_20 = (unsigned short)34748;
unsigned long long int var_21 = 1861721611052350414ULL;
int var_22 = 1797280043;
short var_23 = (short)7707;
unsigned char var_24 = (unsigned char)216;
_Bool arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned int arr_2 [21] [21] ;
unsigned short arr_7 [16] [16] ;
unsigned int arr_11 [16] [16] ;
int arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)42607;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 2011636795U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)8445;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = 3095206121U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2070425419 : -434207707;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
