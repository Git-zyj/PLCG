#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2453687730U;
signed char var_1 = (signed char)69;
int var_2 = 1005825331;
unsigned short var_3 = (unsigned short)18778;
signed char var_6 = (signed char)-38;
int var_8 = 814317638;
unsigned long long int var_9 = 8275154103530010212ULL;
int var_10 = 2021808221;
int var_11 = -415004512;
unsigned long long int var_12 = 8446509617196871331ULL;
int var_13 = -1018532650;
int zero = 0;
signed char var_14 = (signed char)-24;
long long int var_15 = 3458393274712259789LL;
signed char var_16 = (signed char)113;
signed char var_17 = (signed char)-123;
unsigned int var_18 = 3523385523U;
int var_19 = 1909306872;
signed char var_20 = (signed char)71;
unsigned short var_21 = (unsigned short)61370;
unsigned short var_22 = (unsigned short)4357;
unsigned char arr_0 [16] ;
_Bool arr_1 [16] ;
unsigned long long int arr_2 [16] [16] [16] ;
int arr_10 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1746687886756935973ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -207943677;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
