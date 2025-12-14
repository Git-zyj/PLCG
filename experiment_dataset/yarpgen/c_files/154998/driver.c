#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12941;
short var_8 = (short)-10878;
unsigned long long int var_10 = 6014176999241186900ULL;
unsigned int var_13 = 3073598283U;
int zero = 0;
unsigned short var_15 = (unsigned short)60702;
unsigned short var_16 = (unsigned short)47832;
void init() {
}

void checksum() {
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
