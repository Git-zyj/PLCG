#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14268175649133948087ULL;
unsigned long long int var_1 = 672151057351142446ULL;
unsigned char var_3 = (unsigned char)160;
unsigned char var_14 = (unsigned char)250;
short var_15 = (short)-13129;
int zero = 0;
long long int var_19 = -4960008569095794441LL;
unsigned short var_20 = (unsigned short)45636;
short var_21 = (short)7590;
unsigned int var_22 = 1107487978U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
