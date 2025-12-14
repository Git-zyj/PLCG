#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)37935;
short var_3 = (short)-26793;
signed char var_4 = (signed char)67;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 622578943U;
unsigned short var_16 = (unsigned short)17958;
short var_17 = (short)-857;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
