#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21462;
unsigned long long int var_15 = 4651268108366140337ULL;
int zero = 0;
long long int var_19 = -2419546558954318237LL;
unsigned char var_20 = (unsigned char)200;
unsigned long long int var_21 = 642426322777782566ULL;
unsigned int var_22 = 1657341845U;
long long int var_23 = 4022920048428638719LL;
unsigned int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 2898809819U;
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
