#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11634;
long long int var_3 = 4754026966232613284LL;
unsigned int var_5 = 3846108910U;
long long int var_11 = 5138604313562405333LL;
int zero = 0;
unsigned char var_16 = (unsigned char)107;
unsigned long long int var_17 = 2091607454812669112ULL;
long long int var_18 = -2287391085813024552LL;
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
