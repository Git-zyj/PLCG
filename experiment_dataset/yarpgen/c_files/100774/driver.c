#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35123;
short var_1 = (short)28395;
unsigned short var_14 = (unsigned short)56298;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -243928935;
short var_22 = (short)-26225;
short var_23 = (short)-13150;
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
