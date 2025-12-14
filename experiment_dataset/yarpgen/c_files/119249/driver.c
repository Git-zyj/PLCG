#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2072639872;
unsigned long long int var_2 = 17202506623730108718ULL;
int var_6 = 1888216086;
short var_7 = (short)-29195;
short var_8 = (short)2220;
unsigned char var_12 = (unsigned char)236;
long long int var_14 = -4313006655402102107LL;
unsigned long long int var_16 = 4534272297668055481ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)12996;
int var_19 = 1446686576;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
