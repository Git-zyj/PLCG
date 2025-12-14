#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 585528424;
short var_1 = (short)-26964;
unsigned int var_4 = 1224815558U;
unsigned int var_5 = 1555582902U;
short var_7 = (short)-28996;
int var_9 = 859058989;
short var_13 = (short)-14939;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -1121320968962682864LL;
signed char var_18 = (signed char)98;
unsigned int var_19 = 1605675227U;
short var_20 = (short)-247;
short var_21 = (short)-12819;
int var_22 = 839797878;
_Bool var_23 = (_Bool)1;
long long int var_24 = -4164568416485361333LL;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)1;
short var_27 = (short)-7811;
int var_28 = -29685445;
_Bool var_29 = (_Bool)1;
unsigned int var_30 = 3608729553U;
unsigned int arr_2 [15] ;
_Bool arr_3 [15] ;
_Bool arr_4 [15] ;
short arr_5 [15] [15] [15] ;
short arr_7 [15] [15] ;
int arr_13 [13] ;
unsigned short arr_20 [13] [13] ;
long long int arr_25 [13] [13] ;
_Bool arr_31 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 2744164730U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)32552;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-28635;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = 1275577948;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)59123;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_25 [i_0] [i_1] = -8033964061394468840LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_31 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
