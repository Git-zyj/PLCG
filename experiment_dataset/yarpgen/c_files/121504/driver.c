#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)47840;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)29;
unsigned short var_12 = (unsigned short)6335;
short var_14 = (short)30330;
unsigned int var_15 = 4009056441U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)38;
unsigned short var_19 = (unsigned short)1104;
short var_20 = (short)25891;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
