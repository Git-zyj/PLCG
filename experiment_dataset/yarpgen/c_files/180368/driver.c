#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)61910;
short var_7 = (short)7255;
unsigned long long int var_10 = 5387277687480689893ULL;
int zero = 0;
unsigned long long int var_12 = 7778532722166599513ULL;
short var_13 = (short)-12252;
unsigned long long int var_14 = 8704529249835077493ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
