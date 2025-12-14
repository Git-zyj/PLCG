#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1200567223;
int var_5 = 1708828792;
unsigned long long int var_6 = 11125459044398027775ULL;
int zero = 0;
signed char var_16 = (signed char)-83;
unsigned long long int var_17 = 15322088491976391558ULL;
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
