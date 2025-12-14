#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1020186322;
long long int var_2 = -3849278845548294728LL;
unsigned short var_6 = (unsigned short)34978;
unsigned char var_12 = (unsigned char)17;
int zero = 0;
short var_14 = (short)24308;
short var_15 = (short)-28718;
short var_16 = (short)-16314;
unsigned char var_17 = (unsigned char)101;
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
