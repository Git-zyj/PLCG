#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1304597183U;
unsigned long long int var_14 = 10120886075936945283ULL;
int zero = 0;
unsigned int var_20 = 3197834269U;
unsigned short var_21 = (unsigned short)58326;
short var_22 = (short)9819;
unsigned int var_23 = 52628085U;
void init() {
}

void checksum() {
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
