#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1829;
short var_7 = (short)-22358;
unsigned short var_10 = (unsigned short)32309;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-11347;
short var_14 = (short)6168;
int zero = 0;
unsigned short var_17 = (unsigned short)10211;
int var_18 = 517796534;
void init() {
}

void checksum() {
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
