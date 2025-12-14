#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)32013;
int var_4 = -1046617951;
signed char var_5 = (signed char)30;
short var_6 = (short)-25056;
short var_7 = (short)29014;
unsigned int var_10 = 3575299069U;
int zero = 0;
int var_11 = 2124131241;
signed char var_12 = (signed char)11;
unsigned int var_13 = 730325615U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
