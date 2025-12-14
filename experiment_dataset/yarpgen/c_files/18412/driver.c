#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)126;
_Bool var_4 = (_Bool)0;
unsigned int var_8 = 1063377990U;
unsigned char var_10 = (unsigned char)28;
unsigned char var_13 = (unsigned char)230;
unsigned char var_15 = (unsigned char)84;
unsigned char var_16 = (unsigned char)180;
long long int var_18 = -8563237332699004250LL;
int zero = 0;
unsigned int var_20 = 3277898616U;
short var_21 = (short)-22210;
int var_22 = 1251288110;
unsigned short var_23 = (unsigned short)19570;
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
