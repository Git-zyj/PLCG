#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1187136801;
short var_5 = (short)3805;
unsigned long long int var_8 = 13962324559246617493ULL;
unsigned int var_12 = 4209167482U;
int zero = 0;
signed char var_15 = (signed char)35;
unsigned long long int var_16 = 1513427408465805399ULL;
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
