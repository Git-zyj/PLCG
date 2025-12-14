#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
int var_1 = 424595443;
int var_3 = 196958359;
unsigned long long int var_9 = 5511737723371133924ULL;
short var_12 = (short)-537;
int zero = 0;
signed char var_13 = (signed char)44;
unsigned short var_14 = (unsigned short)45303;
void init() {
}

void checksum() {
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
