#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 760434806401820887LL;
unsigned short var_1 = (unsigned short)48510;
unsigned int var_4 = 1202801518U;
unsigned short var_7 = (unsigned short)14224;
signed char var_8 = (signed char)51;
short var_9 = (short)-19726;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)12805;
int zero = 0;
unsigned short var_12 = (unsigned short)45681;
unsigned int var_13 = 3968032320U;
unsigned char var_14 = (unsigned char)85;
short var_15 = (short)-31183;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
