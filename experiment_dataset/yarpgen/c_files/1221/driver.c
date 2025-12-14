#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -305125580905218262LL;
signed char var_2 = (signed char)4;
long long int var_3 = -3834771515867820122LL;
unsigned int var_4 = 2903376329U;
unsigned short var_5 = (unsigned short)41309;
int var_6 = -577632369;
unsigned short var_7 = (unsigned short)26325;
long long int var_8 = 6949387589087777937LL;
unsigned char var_9 = (unsigned char)93;
unsigned short var_10 = (unsigned short)28807;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)205;
short var_13 = (short)2623;
signed char var_14 = (signed char)76;
unsigned short var_15 = (unsigned short)34149;
int var_16 = 1326043151;
int zero = 0;
short var_17 = (short)-296;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-19;
unsigned short var_20 = (unsigned short)43854;
short arr_1 [24] [24] ;
short arr_4 [19] [19] ;
_Bool arr_5 [19] [19] ;
long long int arr_3 [24] [24] ;
long long int arr_6 [19] ;
int arr_7 [19] ;
unsigned short arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)3850;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (short)30632;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -818701536263494566LL : -623111066280361663LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = -3563546182560264637LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 1988746973;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned short)21658;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
