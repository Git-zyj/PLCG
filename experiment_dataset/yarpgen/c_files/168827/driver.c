#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1513904463U;
unsigned int var_5 = 1319070288U;
signed char var_6 = (signed char)-86;
unsigned long long int var_12 = 7020153898339346212ULL;
int zero = 0;
signed char var_16 = (signed char)23;
long long int var_17 = 566724333503209235LL;
unsigned long long int var_18 = 4659143300421538645ULL;
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
