#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 4406811442084943601ULL;
unsigned char var_12 = (unsigned char)103;
unsigned char var_14 = (unsigned char)122;
int zero = 0;
unsigned long long int var_16 = 13202242088267334203ULL;
short var_17 = (short)21175;
void init() {
}

void checksum() {
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
