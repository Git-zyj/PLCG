#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)232;
unsigned int var_5 = 1674935752U;
long long int var_9 = 8788183430995407235LL;
int zero = 0;
long long int var_10 = -3573673039416974838LL;
long long int var_11 = 4721456664213020020LL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)69;
int var_14 = 1423781804;
int var_15 = -1709981840;
unsigned int arr_2 [14] ;
unsigned long long int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 1617188838U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 9466258567500375797ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
