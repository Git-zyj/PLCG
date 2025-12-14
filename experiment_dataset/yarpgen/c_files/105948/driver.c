#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12299009696940482149ULL;
unsigned char var_3 = (unsigned char)148;
short var_6 = (short)2158;
unsigned int var_8 = 3570005616U;
int zero = 0;
signed char var_13 = (signed char)127;
_Bool var_14 = (_Bool)0;
long long int var_15 = -6765099765854336754LL;
long long int var_16 = 1039319126567836282LL;
void init() {
}

void checksum() {
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
