#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2418;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)145;
unsigned int var_8 = 2073930538U;
unsigned char var_11 = (unsigned char)42;
unsigned int var_12 = 1828497033U;
unsigned char var_13 = (unsigned char)154;
unsigned char var_15 = (unsigned char)100;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2159533597U;
unsigned char var_18 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
