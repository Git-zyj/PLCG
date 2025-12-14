#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)63;
unsigned int var_1 = 257192801U;
short var_3 = (short)10171;
short var_5 = (short)-3912;
unsigned long long int var_6 = 12673729774618797605ULL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 889018401U;
int zero = 0;
unsigned char var_11 = (unsigned char)2;
int var_12 = 170864971;
short var_13 = (short)-6941;
unsigned int var_14 = 4036146518U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
