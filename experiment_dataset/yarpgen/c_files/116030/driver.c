#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_12 = (unsigned short)45762;
int zero = 0;
unsigned long long int var_15 = 15420581432611035770ULL;
unsigned short var_16 = (unsigned short)57806;
long long int var_17 = -19653217687745548LL;
unsigned short var_18 = (unsigned short)8891;
unsigned long long int var_19 = 2220826195227110183ULL;
unsigned long long int var_20 = 8133123983853677264ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
