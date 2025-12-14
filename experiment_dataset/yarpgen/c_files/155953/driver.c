#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_3 = (short)-141;
unsigned int var_4 = 3045875200U;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)22506;
signed char var_8 = (signed char)103;
int zero = 0;
unsigned short var_15 = (unsigned short)58291;
unsigned int var_16 = 2482006685U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
