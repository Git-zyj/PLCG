#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10266897006820210094ULL;
unsigned int var_1 = 3281702068U;
unsigned long long int var_11 = 8064496212642248310ULL;
unsigned long long int var_13 = 5757931371008018564ULL;
int zero = 0;
unsigned int var_16 = 96323653U;
unsigned short var_17 = (unsigned short)19016;
unsigned long long int var_18 = 14056924595307271895ULL;
unsigned long long int var_19 = 2196977694639486547ULL;
unsigned short var_20 = (unsigned short)40038;
unsigned long long int arr_1 [14] ;
unsigned long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 11458365845689873683ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 6268957227486566408ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
