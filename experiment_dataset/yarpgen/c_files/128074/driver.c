#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12563;
short var_5 = (short)30367;
signed char var_8 = (signed char)-92;
unsigned short var_15 = (unsigned short)42171;
long long int var_19 = -5212319688153681820LL;
int zero = 0;
int var_20 = -760107412;
short var_21 = (short)10699;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
