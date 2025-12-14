#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 359509738U;
unsigned int var_4 = 984825465U;
unsigned char var_6 = (unsigned char)244;
unsigned short var_11 = (unsigned short)24276;
int zero = 0;
short var_15 = (short)-1214;
_Bool var_16 = (_Bool)1;
short var_17 = (short)20365;
void init() {
}

void checksum() {
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
