#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1798765074;
int var_8 = 1560201918;
int var_10 = -1144963679;
unsigned short var_11 = (unsigned short)40523;
short var_14 = (short)-22188;
int zero = 0;
short var_17 = (short)28811;
unsigned char var_18 = (unsigned char)245;
unsigned short var_19 = (unsigned short)55937;
signed char var_20 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
