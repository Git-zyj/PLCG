#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 10849821830069033782ULL;
int var_11 = -1189840255;
unsigned short var_14 = (unsigned short)53532;
unsigned int var_16 = 2260209743U;
int zero = 0;
unsigned short var_17 = (unsigned short)60780;
signed char var_18 = (signed char)85;
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
