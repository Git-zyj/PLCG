#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4106523688U;
unsigned int var_4 = 1913080826U;
unsigned int var_8 = 401918522U;
int zero = 0;
unsigned int var_12 = 1282373352U;
unsigned int var_13 = 3037909110U;
unsigned int var_14 = 3622538009U;
unsigned int var_15 = 996123216U;
unsigned int var_16 = 587516308U;
unsigned int arr_0 [17] ;
unsigned int arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 3266914457U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 907285589U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
