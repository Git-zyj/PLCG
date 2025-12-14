#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 9823647761319829568ULL;
unsigned int var_11 = 129314818U;
signed char var_14 = (signed char)-101;
int zero = 0;
unsigned int var_15 = 1878174225U;
unsigned long long int var_16 = 14456621480952364526ULL;
unsigned char var_17 = (unsigned char)7;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
