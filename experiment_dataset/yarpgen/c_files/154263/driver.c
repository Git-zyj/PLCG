#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)63378;
unsigned long long int var_4 = 16220864483750921938ULL;
short var_8 = (short)-18211;
unsigned long long int var_9 = 14624714905855950231ULL;
int zero = 0;
long long int var_11 = -1455489689446338058LL;
short var_12 = (short)-10528;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
