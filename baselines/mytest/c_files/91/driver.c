#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 13980312138901783320ULL;
unsigned short var_7 = (unsigned short)51159;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 14664613114293992700ULL;
unsigned long long int var_20 = 9523132138012537402ULL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)23241;
_Bool var_23 = (_Bool)0;
unsigned long long int arr_0 [15] ;
unsigned short arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 563073139247642050ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)11857;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
