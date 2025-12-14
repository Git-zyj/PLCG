#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_3 = (short)-28603;
signed char var_4 = (signed char)21;
short var_6 = (short)20065;
_Bool var_7 = (_Bool)0;
int var_14 = 833749265;
signed char var_16 = (signed char)102;
unsigned short var_17 = (unsigned short)39990;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)1471;
short var_21 = (short)-21898;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
