#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-26;
int var_7 = -1804404244;
long long int var_8 = -6355687189232594132LL;
long long int var_11 = -1228716365116099508LL;
int zero = 0;
unsigned int var_13 = 3047234928U;
unsigned int var_14 = 1989130552U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
