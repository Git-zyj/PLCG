#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-579;
unsigned int var_5 = 1577199475U;
unsigned long long int var_6 = 7362880000893311399ULL;
unsigned char var_10 = (unsigned char)247;
unsigned char var_12 = (unsigned char)241;
int zero = 0;
int var_14 = 980799269;
unsigned long long int var_15 = 12443755333416874346ULL;
short var_16 = (short)13041;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
