#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4967;
int var_3 = 1349632623;
long long int var_4 = -1666743665756950233LL;
unsigned int var_11 = 2810331750U;
short var_14 = (short)-8248;
int zero = 0;
unsigned int var_17 = 1755126531U;
unsigned short var_18 = (unsigned short)59775;
void init() {
}

void checksum() {
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
