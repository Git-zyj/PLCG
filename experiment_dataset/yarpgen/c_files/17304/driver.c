#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)205;
unsigned short var_6 = (unsigned short)6478;
short var_8 = (short)10776;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 4250059899U;
long long int var_12 = 2041223029928896832LL;
int zero = 0;
int var_13 = 1152741534;
unsigned short var_14 = (unsigned short)24852;
unsigned long long int var_15 = 14652870955552291062ULL;
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
