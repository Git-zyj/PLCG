#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14141507374738606210ULL;
int var_8 = 472783108;
unsigned char var_10 = (unsigned char)227;
int zero = 0;
unsigned long long int var_14 = 8981235484304254003ULL;
unsigned short var_15 = (unsigned short)20694;
unsigned short var_16 = (unsigned short)35461;
short var_17 = (short)-31326;
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
