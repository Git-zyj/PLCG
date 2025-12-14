#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3509788916551119339LL;
signed char var_10 = (signed char)70;
unsigned short var_12 = (unsigned short)33259;
unsigned short var_17 = (unsigned short)26629;
int zero = 0;
int var_20 = 221081446;
int var_21 = 439286653;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
