#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1861571689;
long long int var_10 = -4052557177452292889LL;
unsigned int var_11 = 3382306009U;
unsigned int var_12 = 590738149U;
int zero = 0;
unsigned int var_13 = 4127887618U;
unsigned int var_14 = 1583686895U;
unsigned int var_15 = 3863954288U;
int var_16 = 872316694;
signed char arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)88;
}

void checksum() {
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
