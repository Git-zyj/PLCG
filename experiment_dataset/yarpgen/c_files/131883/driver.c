#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 359752418U;
short var_1 = (short)3906;
short var_7 = (short)-1623;
signed char var_11 = (signed char)52;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_16 = 284293897;
unsigned short var_17 = (unsigned short)28565;
int var_18 = -397512198;
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
