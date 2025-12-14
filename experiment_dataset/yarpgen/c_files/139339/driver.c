#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned char var_13 = (unsigned char)9;
short var_14 = (short)-23880;
unsigned char var_16 = (unsigned char)24;
unsigned short var_17 = (unsigned short)6366;
int zero = 0;
unsigned short var_20 = (unsigned short)8880;
long long int var_21 = 5330100611886165898LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
