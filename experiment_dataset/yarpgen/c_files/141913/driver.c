#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 846411475U;
unsigned int var_5 = 3413174412U;
unsigned short var_6 = (unsigned short)28661;
unsigned int var_10 = 2544816374U;
unsigned long long int var_11 = 11755489395461765432ULL;
signed char var_12 = (signed char)-20;
long long int var_13 = 3291206030590350255LL;
int zero = 0;
short var_14 = (short)18342;
unsigned long long int var_15 = 12578820666178311133ULL;
unsigned int var_16 = 452608374U;
void init() {
}

void checksum() {
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
