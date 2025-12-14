#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3904375044941122031LL;
short var_10 = (short)16944;
signed char var_12 = (signed char)-88;
long long int var_16 = -8859699470011878639LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 830132937;
long long int var_21 = 3259001515220080306LL;
unsigned char var_22 = (unsigned char)197;
unsigned int var_23 = 376475316U;
long long int var_24 = 3008215399136592324LL;
signed char var_25 = (signed char)109;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 3493470529U;
long long int var_28 = -3220402388554048819LL;
_Bool var_29 = (_Bool)0;
int var_30 = -1438438465;
long long int var_31 = -6937302086880931883LL;
int var_32 = -1458774125;
int var_33 = -1509807122;
signed char var_34 = (signed char)-123;
int var_35 = 1552170545;
long long int arr_0 [20] ;
unsigned char arr_1 [20] ;
_Bool arr_2 [20] [20] ;
unsigned char arr_3 [25] ;
unsigned short arr_4 [25] [25] ;
_Bool arr_6 [25] ;
short arr_10 [19] [19] ;
int arr_12 [21] ;
unsigned int arr_14 [25] ;
int arr_17 [25] [25] [25] ;
unsigned char arr_19 [25] ;
int arr_20 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -305366774417933377LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)47444;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-30268;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 2009144000;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = 1215118534U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 1674344451;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = -2108117949;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
