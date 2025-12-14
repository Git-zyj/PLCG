#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1143309445U;
int var_3 = 1459266159;
unsigned int var_9 = 2025024612U;
int var_15 = 1251123496;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 820632017;
void init() {
}

void checksum() {
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
