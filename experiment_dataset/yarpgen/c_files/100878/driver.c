#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)73;
unsigned short var_12 = (unsigned short)31054;
long long int var_13 = 4690915762018919045LL;
int zero = 0;
short var_14 = (short)-891;
unsigned char var_15 = (unsigned char)18;
signed char var_16 = (signed char)-80;
unsigned char var_17 = (unsigned char)252;
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
