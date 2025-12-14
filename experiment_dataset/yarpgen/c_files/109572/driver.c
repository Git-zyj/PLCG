#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
unsigned int var_1 = 2714109058U;
int var_2 = 790148197;
int var_4 = -896905365;
unsigned char var_5 = (unsigned char)66;
long long int var_6 = 6889302849244573720LL;
int var_7 = -80172395;
unsigned char var_9 = (unsigned char)45;
int zero = 0;
int var_11 = -1857458070;
unsigned int var_12 = 2694087920U;
long long int var_13 = -4848946870473623720LL;
long long int var_14 = -9127382551651160670LL;
long long int var_15 = 6957600049367365163LL;
long long int arr_4 [25] [25] ;
long long int arr_5 [25] [25] [25] ;
int arr_7 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = -6762871784331292231LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -8803698960958821220LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 546815067;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
