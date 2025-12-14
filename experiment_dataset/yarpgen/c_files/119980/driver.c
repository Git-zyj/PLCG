#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 591102679U;
unsigned short var_12 = (unsigned short)9775;
_Bool var_13 = (_Bool)1;
unsigned long long int var_16 = 7576335413157615946ULL;
short var_17 = (short)-20748;
int zero = 0;
signed char var_20 = (signed char)13;
int var_21 = 1111094076;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 2877585362U;
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
