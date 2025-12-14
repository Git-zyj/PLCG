#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17853131997477077898ULL;
int var_4 = 404043846;
unsigned short var_5 = (unsigned short)24113;
int var_8 = -330623476;
unsigned long long int var_12 = 17003955067473391638ULL;
int zero = 0;
unsigned int var_14 = 2201117705U;
unsigned char var_15 = (unsigned char)183;
int var_16 = -1843051614;
unsigned long long int var_17 = 8517431416331729296ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
