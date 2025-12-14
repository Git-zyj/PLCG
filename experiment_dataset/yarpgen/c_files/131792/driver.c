#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
short var_5 = (short)-30084;
unsigned short var_6 = (unsigned short)23344;
long long int var_11 = 3853401761873343393LL;
unsigned int var_12 = 1993354490U;
int zero = 0;
long long int var_13 = 6788358883367778792LL;
unsigned char var_14 = (unsigned char)23;
unsigned char var_15 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
