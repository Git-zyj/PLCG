#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6999137740528867083LL;
_Bool var_8 = (_Bool)0;
unsigned int var_11 = 3097245189U;
int var_15 = 194752211;
unsigned short var_16 = (unsigned short)1018;
int zero = 0;
int var_19 = 971155184;
short var_20 = (short)-17908;
int var_21 = -961810867;
unsigned short var_22 = (unsigned short)46668;
unsigned char var_23 = (unsigned char)84;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
