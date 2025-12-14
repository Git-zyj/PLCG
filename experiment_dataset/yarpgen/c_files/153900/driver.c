#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6537873308098187294ULL;
unsigned long long int var_9 = 4006433949585268813ULL;
long long int var_12 = -777721505609247607LL;
unsigned int var_13 = 3882690785U;
short var_16 = (short)-28795;
int zero = 0;
unsigned char var_18 = (unsigned char)42;
unsigned long long int var_19 = 12183292880242940623ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
