#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 985274589;
unsigned char var_4 = (unsigned char)200;
unsigned long long int var_5 = 14475603516906628330ULL;
unsigned short var_7 = (unsigned short)7327;
int zero = 0;
short var_10 = (short)-2769;
short var_11 = (short)29156;
unsigned short var_12 = (unsigned short)53966;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
