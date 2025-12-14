#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)57712;
long long int var_4 = -1509254550478172744LL;
unsigned short var_5 = (unsigned short)23314;
int var_6 = 1107586780;
unsigned char var_7 = (unsigned char)227;
unsigned char var_8 = (unsigned char)59;
signed char var_11 = (signed char)123;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
long long int var_15 = -6328198793431552789LL;
unsigned char var_16 = (unsigned char)198;
int var_17 = -1358394151;
int zero = 0;
unsigned char var_18 = (unsigned char)78;
int var_19 = -350384018;
unsigned long long int var_20 = 17874409739340597527ULL;
unsigned long long int var_21 = 5321724482004546819ULL;
short var_22 = (short)-18501;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
