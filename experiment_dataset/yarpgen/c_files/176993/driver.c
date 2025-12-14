#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)190;
unsigned short var_10 = (unsigned short)61490;
signed char var_11 = (signed char)-38;
unsigned int var_16 = 3895795816U;
long long int var_18 = 6146115674498092423LL;
int zero = 0;
unsigned short var_19 = (unsigned short)39530;
unsigned short var_20 = (unsigned short)55784;
unsigned short var_21 = (unsigned short)42968;
short var_22 = (short)-14747;
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
