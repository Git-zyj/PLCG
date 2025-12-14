#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -532977248;
unsigned int var_3 = 4254461132U;
int var_5 = -2137271906;
_Bool var_6 = (_Bool)1;
int zero = 0;
short var_10 = (short)-1652;
short var_11 = (short)-30155;
short var_12 = (short)23120;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
