#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)16576;
long long int var_5 = 1560142084635882620LL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)55802;
short var_10 = (short)14338;
unsigned short var_12 = (unsigned short)40321;
int zero = 0;
unsigned short var_14 = (unsigned short)7954;
unsigned char var_15 = (unsigned char)213;
signed char var_16 = (signed char)125;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
