#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_6 = 5143841013833806577LL;
_Bool var_7 = (_Bool)0;
long long int var_10 = -7800214533206627653LL;
unsigned char var_13 = (unsigned char)38;
long long int var_14 = -6556223314192532018LL;
int zero = 0;
signed char var_16 = (signed char)123;
unsigned short var_17 = (unsigned short)42063;
short var_18 = (short)-24603;
void init() {
}

void checksum() {
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
