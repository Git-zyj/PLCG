#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3695770076U;
unsigned int var_3 = 1765942950U;
unsigned short var_7 = (unsigned short)2169;
int var_8 = -479440180;
unsigned long long int var_10 = 16253576098375554016ULL;
int zero = 0;
unsigned long long int var_12 = 10993520782116751496ULL;
short var_13 = (short)-13100;
unsigned int var_14 = 446805264U;
long long int arr_0 [10] ;
unsigned long long int arr_1 [10] ;
unsigned long long int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -6998875725031865692LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 694425153449001665ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1033830223810218152ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
