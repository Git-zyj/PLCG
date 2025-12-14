#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)15892;
unsigned char var_4 = (unsigned char)159;
unsigned char var_6 = (unsigned char)4;
long long int var_11 = 3854837415147455312LL;
unsigned int var_12 = 1209299816U;
int zero = 0;
short var_14 = (short)29649;
unsigned int var_15 = 3236092607U;
unsigned int var_16 = 2430533467U;
long long int var_17 = -5269971929569975842LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
