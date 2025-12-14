#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)31;
unsigned int var_15 = 712758280U;
short var_18 = (short)10060;
short var_19 = (short)2600;
int zero = 0;
int var_20 = 1941510775;
long long int var_21 = -7020102175198476909LL;
unsigned char var_22 = (unsigned char)37;
long long int var_23 = 5006344215409918367LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
