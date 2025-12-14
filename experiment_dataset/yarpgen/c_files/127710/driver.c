#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)18431;
unsigned char var_3 = (unsigned char)225;
long long int var_4 = -3588323922748424249LL;
unsigned int var_7 = 4132141922U;
unsigned short var_8 = (unsigned short)44275;
long long int var_10 = -473162456582880328LL;
signed char var_14 = (signed char)44;
short var_15 = (short)28819;
int zero = 0;
unsigned short var_17 = (unsigned short)48395;
unsigned char var_18 = (unsigned char)122;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8539434593935208120LL;
unsigned int var_21 = 4155874394U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
