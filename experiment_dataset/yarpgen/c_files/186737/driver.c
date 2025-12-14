#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-1845;
unsigned char var_8 = (unsigned char)226;
short var_9 = (short)4655;
unsigned char var_10 = (unsigned char)222;
long long int var_11 = -1937056582972105412LL;
int zero = 0;
unsigned char var_15 = (unsigned char)53;
long long int var_16 = 8174308855517835502LL;
unsigned int var_17 = 1865022813U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
