#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
unsigned long long int var_4 = 6964472046355167581ULL;
unsigned long long int var_10 = 1859406745023754807ULL;
unsigned int var_12 = 1779804042U;
int zero = 0;
long long int var_15 = 1919320445497404011LL;
int var_16 = -644442268;
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
