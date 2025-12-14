#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2099978286531195538LL;
unsigned short var_4 = (unsigned short)29954;
signed char var_5 = (signed char)38;
int var_14 = -337034717;
unsigned long long int var_17 = 16385914799682791341ULL;
short var_18 = (short)16197;
int zero = 0;
unsigned long long int var_20 = 17459968233485507039ULL;
long long int var_21 = -1637137175412209647LL;
unsigned short var_22 = (unsigned short)44620;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
