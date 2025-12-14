#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 422370884255161245ULL;
int var_1 = 716077341;
unsigned int var_8 = 1722116999U;
signed char var_11 = (signed char)64;
signed char var_14 = (signed char)126;
int zero = 0;
unsigned short var_15 = (unsigned short)58620;
int var_16 = 2084618737;
signed char var_17 = (signed char)49;
unsigned long long int var_18 = 1477808762500345261ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
