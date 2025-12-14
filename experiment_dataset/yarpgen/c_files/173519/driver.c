#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)3660;
signed char var_2 = (signed char)-23;
short var_3 = (short)15938;
unsigned short var_4 = (unsigned short)30369;
short var_6 = (short)30952;
short var_7 = (short)-13290;
short var_9 = (short)-6596;
_Bool var_10 = (_Bool)1;
long long int var_12 = 633106776238157070LL;
unsigned char var_14 = (unsigned char)115;
unsigned short var_15 = (unsigned short)35663;
int zero = 0;
unsigned char var_17 = (unsigned char)12;
short var_18 = (short)-4813;
unsigned int var_19 = 4059335796U;
int var_20 = -248844630;
long long int var_21 = -426975477313157533LL;
unsigned char var_22 = (unsigned char)66;
short var_23 = (short)26291;
short arr_0 [13] ;
unsigned char arr_1 [13] ;
int arr_2 [13] ;
short arr_8 [25] ;
unsigned char arr_11 [25] [25] ;
signed char arr_12 [25] [25] [25] ;
unsigned short arr_14 [25] [25] ;
short arr_16 [25] [25] [25] ;
_Bool arr_17 [25] ;
unsigned short arr_7 [13] [13] ;
int arr_20 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)29771;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -701581781;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (short)19509;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)12282;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)-22139;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)18804;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 489825921 : 1415526204;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
