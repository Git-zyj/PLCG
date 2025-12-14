#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -1059758663;
signed char var_10 = (signed char)117;
int zero = 0;
unsigned long long int var_12 = 4566022881981923792ULL;
short var_13 = (short)-30733;
unsigned int var_14 = 1414123942U;
unsigned short var_15 = (unsigned short)53160;
short var_16 = (short)-9135;
unsigned int var_17 = 2424390259U;
unsigned long long int var_18 = 14498559080099165381ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 2946370637815727698ULL;
unsigned long long int var_21 = 3305552110401110485ULL;
long long int var_22 = -8530555765057530064LL;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 229273103U;
unsigned short var_25 = (unsigned short)49264;
long long int var_26 = -217004265192516704LL;
unsigned short arr_9 [23] [23] [23] ;
unsigned long long int arr_13 [23] ;
unsigned long long int arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)9554 : (unsigned short)14819;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 13660014459100457533ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 7041096656971575350ULL;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
