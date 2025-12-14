#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5210149944280901052LL;
unsigned int var_6 = 3905969915U;
unsigned char var_10 = (unsigned char)14;
short var_11 = (short)-24198;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)6187;
unsigned char var_16 = (unsigned char)209;
unsigned int var_17 = 2028109081U;
void init() {
}

void checksum() {
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
