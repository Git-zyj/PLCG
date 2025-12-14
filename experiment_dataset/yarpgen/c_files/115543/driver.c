#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6041054990773277963LL;
unsigned int var_3 = 2176723053U;
long long int var_6 = -8782877603942645770LL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-125;
unsigned short var_12 = (unsigned short)48611;
int zero = 0;
long long int var_13 = -6768091991377125392LL;
_Bool var_14 = (_Bool)0;
int var_15 = 1170220745;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
