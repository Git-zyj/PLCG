#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)35299;
short var_7 = (short)-14013;
signed char var_8 = (signed char)-54;
int zero = 0;
int var_13 = 1886103544;
unsigned char var_14 = (unsigned char)243;
unsigned char var_15 = (unsigned char)216;
long long int var_16 = 282934163563512339LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
