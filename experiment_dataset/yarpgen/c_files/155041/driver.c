#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-17326;
short var_4 = (short)25616;
signed char var_5 = (signed char)2;
short var_7 = (short)-8800;
short var_12 = (short)-15072;
signed char var_13 = (signed char)42;
short var_16 = (short)-28646;
short var_17 = (short)649;
int zero = 0;
unsigned int var_19 = 1737425211U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
