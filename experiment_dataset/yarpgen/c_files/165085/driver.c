#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3477;
unsigned int var_2 = 3630605157U;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 11009403551311227881ULL;
unsigned short var_12 = (unsigned short)64859;
unsigned short var_13 = (unsigned short)55333;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
