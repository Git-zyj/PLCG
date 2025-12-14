#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2987704839U;
int var_5 = 808599560;
int zero = 0;
unsigned short var_12 = (unsigned short)51282;
short var_13 = (short)-16136;
int var_14 = 760288792;
int var_15 = 1755584632;
int var_16 = 1895792757;
unsigned short var_17 = (unsigned short)18243;
short var_18 = (short)-8384;
int var_19 = -1020645029;
unsigned int var_20 = 1957808927U;
unsigned short var_21 = (unsigned short)37594;
int arr_0 [22] ;
unsigned int arr_1 [22] ;
short arr_2 [23] ;
short arr_4 [23] ;
short arr_7 [23] [23] [23] ;
int arr_8 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -638061299;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1547200219U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-24588;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)16267;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)16770;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = -2100365491;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
