#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2618;
signed char var_5 = (signed char)5;
short var_11 = (short)-29481;
unsigned long long int var_12 = 13681347305698426510ULL;
int zero = 0;
long long int var_18 = 82215907751530468LL;
unsigned long long int var_19 = 11370612028149293554ULL;
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
