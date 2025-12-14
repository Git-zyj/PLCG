#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 755540470;
signed char var_10 = (signed char)114;
signed char var_13 = (signed char)88;
short var_14 = (short)-17952;
int zero = 0;
int var_15 = 507620110;
short var_16 = (short)-14686;
void init() {
}

void checksum() {
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
