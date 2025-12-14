#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1221247860U;
long long int var_5 = -1834052673169105643LL;
unsigned short var_6 = (unsigned short)15488;
unsigned short var_13 = (unsigned short)2752;
short var_16 = (short)30579;
signed char var_17 = (signed char)9;
short var_19 = (short)-1713;
int zero = 0;
unsigned short var_20 = (unsigned short)24620;
short var_21 = (short)3201;
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
