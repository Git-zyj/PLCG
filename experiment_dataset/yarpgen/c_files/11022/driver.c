#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-22497;
unsigned char var_8 = (unsigned char)16;
signed char var_10 = (signed char)90;
int var_12 = 2124881873;
short var_13 = (short)-11921;
long long int var_14 = 999706034992273983LL;
int zero = 0;
int var_15 = -1036815647;
signed char var_16 = (signed char)-7;
void init() {
}

void checksum() {
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
