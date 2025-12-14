#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 127983246U;
int var_5 = -394686663;
int var_6 = -335067917;
long long int var_8 = -8008307031698748151LL;
unsigned int var_9 = 2822539051U;
unsigned int var_10 = 264090878U;
int var_14 = -507416741;
int var_16 = 1265707326;
long long int var_17 = -4496212270512860347LL;
int zero = 0;
int var_20 = -344497712;
long long int var_21 = 5092212236267142223LL;
long long int var_22 = 2083092690499158022LL;
unsigned int var_23 = 1509730332U;
int var_24 = -1852992889;
unsigned int var_25 = 4140134741U;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 2865341280U;
unsigned int var_28 = 1559707984U;
_Bool arr_0 [16] [16] ;
unsigned int arr_1 [16] ;
unsigned int arr_2 [16] ;
int arr_4 [16] ;
unsigned int arr_9 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1956279311U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 2998308759U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -31475666;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 3968695782U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
