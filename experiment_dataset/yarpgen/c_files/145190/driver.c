#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7561966349560642449LL;
long long int var_5 = -3027583273563463983LL;
unsigned short var_8 = (unsigned short)21083;
short var_10 = (short)3994;
unsigned long long int var_11 = 16744934492837080710ULL;
int var_15 = -2001501533;
int zero = 0;
unsigned long long int var_17 = 8131528002117261809ULL;
unsigned char var_18 = (unsigned char)170;
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
