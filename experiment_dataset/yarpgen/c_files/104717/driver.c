#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
_Bool var_1 = (_Bool)1;
short var_2 = (short)4840;
_Bool var_4 = (_Bool)1;
int var_7 = -411985126;
int var_10 = -1968802415;
short var_11 = (short)-3688;
signed char var_12 = (signed char)15;
signed char var_13 = (signed char)-108;
unsigned int var_16 = 1847629945U;
int zero = 0;
short var_18 = (short)-18579;
int var_19 = 704384973;
int var_20 = 1177276298;
unsigned int var_21 = 4006707837U;
unsigned short var_22 = (unsigned short)51074;
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
