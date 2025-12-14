#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1243612427;
unsigned short var_2 = (unsigned short)18188;
unsigned int var_6 = 2315231536U;
unsigned short var_7 = (unsigned short)41784;
unsigned short var_11 = (unsigned short)52808;
unsigned short var_12 = (unsigned short)32681;
unsigned short var_14 = (unsigned short)3917;
unsigned char var_15 = (unsigned char)7;
int var_16 = 1083212042;
signed char var_17 = (signed char)45;
int zero = 0;
unsigned int var_20 = 893017542U;
unsigned int var_21 = 981045531U;
int var_22 = 1823520034;
short var_23 = (short)4575;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
