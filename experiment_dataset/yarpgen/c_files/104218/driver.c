#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)26;
unsigned int var_12 = 2358824128U;
int zero = 0;
short var_14 = (short)-22987;
unsigned short var_15 = (unsigned short)23373;
unsigned char var_16 = (unsigned char)116;
long long int var_17 = -8907556203886816077LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
