#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 1325232099U;
int var_8 = -1056498062;
unsigned char var_15 = (unsigned char)46;
int zero = 0;
short var_16 = (short)-14607;
unsigned int var_17 = 2598511883U;
void init() {
}

void checksum() {
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
