#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 924272038;
_Bool var_3 = (_Bool)1;
short var_8 = (short)-33;
int zero = 0;
int var_14 = 1609466256;
unsigned char var_15 = (unsigned char)199;
signed char var_16 = (signed char)97;
signed char var_17 = (signed char)24;
signed char var_18 = (signed char)20;
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
