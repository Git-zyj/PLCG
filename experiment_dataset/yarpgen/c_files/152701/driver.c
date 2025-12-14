#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55382;
signed char var_3 = (signed char)84;
int var_6 = -1775253627;
unsigned short var_7 = (unsigned short)29224;
int zero = 0;
signed char var_12 = (signed char)65;
unsigned char var_13 = (unsigned char)178;
short var_14 = (short)16007;
unsigned short var_15 = (unsigned short)51373;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
