#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-30386;
unsigned long long int var_4 = 4296726189227543526ULL;
signed char var_13 = (signed char)2;
int zero = 0;
int var_16 = 513824414;
int var_17 = -1365756944;
unsigned long long int var_18 = 13920890399397261751ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
