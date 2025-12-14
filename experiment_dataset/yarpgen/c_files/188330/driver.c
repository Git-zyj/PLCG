#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10782;
short var_1 = (short)10859;
short var_11 = (short)-28121;
short var_12 = (short)9512;
int zero = 0;
short var_14 = (short)-7937;
short var_15 = (short)9052;
short var_16 = (short)-30027;
void init() {
}

void checksum() {
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
