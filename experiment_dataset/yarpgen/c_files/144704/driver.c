#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1966120228;
unsigned char var_2 = (unsigned char)202;
unsigned short var_4 = (unsigned short)54771;
unsigned int var_5 = 3302848614U;
signed char var_6 = (signed char)85;
_Bool var_7 = (_Bool)0;
long long int var_9 = -4758682120777900840LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-2626;
int var_14 = 467277989;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)253;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
