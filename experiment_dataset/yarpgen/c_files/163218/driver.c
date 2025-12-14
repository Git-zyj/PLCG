#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 546799275;
unsigned char var_4 = (unsigned char)5;
unsigned char var_7 = (unsigned char)52;
unsigned long long int var_11 = 11624104642176474056ULL;
int var_12 = 1874230208;
long long int var_13 = 3200294842105120455LL;
signed char var_14 = (signed char)10;
unsigned int var_17 = 289715164U;
int zero = 0;
unsigned char var_19 = (unsigned char)191;
unsigned char var_20 = (unsigned char)85;
unsigned int var_21 = 374877307U;
_Bool var_22 = (_Bool)0;
unsigned long long int arr_1 [16] [16] ;
int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 15814893655268400825ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 1744822611;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
