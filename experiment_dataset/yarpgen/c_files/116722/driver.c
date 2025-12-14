#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)25007;
_Bool var_5 = (_Bool)0;
long long int var_11 = 4657837909802319223LL;
int zero = 0;
short var_13 = (short)-1783;
unsigned char var_14 = (unsigned char)163;
long long int var_15 = -9012162142120803513LL;
unsigned char var_16 = (unsigned char)148;
int var_17 = 190775214;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
