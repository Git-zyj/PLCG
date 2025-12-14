#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15291419904262769212ULL;
unsigned long long int var_5 = 10483907705131142587ULL;
long long int var_8 = 221903210812450090LL;
int zero = 0;
signed char var_11 = (signed char)7;
signed char var_12 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
