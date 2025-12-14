#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2781456110U;
int var_1 = 879154552;
_Bool var_2 = (_Bool)1;
long long int var_6 = -8845041956063880945LL;
unsigned short var_9 = (unsigned short)60161;
short var_10 = (short)-8727;
int zero = 0;
short var_15 = (short)2048;
_Bool var_16 = (_Bool)1;
long long int var_17 = -2433484829176751669LL;
unsigned short var_18 = (unsigned short)28760;
void init() {
}

void checksum() {
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
