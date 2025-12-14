#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6244687639377229076ULL;
signed char var_6 = (signed char)90;
long long int var_7 = 6655855197130704889LL;
signed char var_9 = (signed char)48;
int zero = 0;
short var_16 = (short)-22264;
int var_17 = -1928295276;
signed char var_18 = (signed char)-84;
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
