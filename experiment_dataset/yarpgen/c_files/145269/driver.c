#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2820837856816239208LL;
long long int var_4 = 392899095241982829LL;
short var_5 = (short)24491;
unsigned long long int var_6 = 14812574105838617252ULL;
unsigned int var_10 = 3289737603U;
long long int var_12 = -853054761381313166LL;
int zero = 0;
int var_15 = -1246045102;
int var_16 = 1808412194;
short var_17 = (short)-23183;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
