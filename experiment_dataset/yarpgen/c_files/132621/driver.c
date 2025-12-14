#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2610555805U;
short var_3 = (short)29857;
unsigned int var_4 = 1876331849U;
short var_7 = (short)-22570;
short var_8 = (short)5187;
int zero = 0;
short var_12 = (short)9721;
short var_13 = (short)-27900;
short var_14 = (short)-25847;
short var_15 = (short)10342;
unsigned int var_16 = 1026307706U;
void init() {
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
