#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)55229;
short var_8 = (short)22850;
unsigned long long int var_13 = 10726325111977102442ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)7291;
short var_16 = (short)-18034;
short var_17 = (short)-1490;
void init() {
}

void checksum() {
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
