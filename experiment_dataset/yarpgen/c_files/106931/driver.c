#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28607;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 4142382853U;
short var_6 = (short)10608;
int var_7 = -838114715;
unsigned int var_9 = 904565214U;
unsigned int var_10 = 1715229171U;
int zero = 0;
unsigned short var_14 = (unsigned short)9738;
unsigned short var_15 = (unsigned short)61203;
short var_16 = (short)29387;
_Bool var_17 = (_Bool)0;
int var_18 = -249947702;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
