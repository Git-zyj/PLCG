#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14898979665388855234ULL;
unsigned int var_1 = 2106534005U;
short var_2 = (short)-31754;
short var_3 = (short)30500;
_Bool var_5 = (_Bool)1;
int var_6 = -1442818023;
int var_7 = -1108980030;
unsigned long long int var_8 = 5056396107331862954ULL;
int var_10 = 543537413;
signed char var_11 = (signed char)5;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 2093603375U;
_Bool var_15 = (_Bool)0;
long long int var_16 = -6995516095341950457LL;
unsigned int var_17 = 2434829611U;
unsigned char var_18 = (unsigned char)98;
unsigned short var_19 = (unsigned short)59081;
unsigned char var_20 = (unsigned char)106;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 1808216402241469639ULL;
int var_23 = 1544950959;
int arr_11 [25] ;
_Bool arr_2 [13] [13] ;
unsigned long long int arr_5 [18] ;
unsigned short arr_6 [18] ;
int arr_15 [25] [25] [25] ;
unsigned long long int arr_16 [25] ;
long long int arr_17 [25] [25] ;
short arr_18 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 525759902;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 6919381754273373027ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)50981;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 1556867560;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = 5709783350750684477ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_17 [i_0] [i_1] = 4379446399108222367LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = (short)3595;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
