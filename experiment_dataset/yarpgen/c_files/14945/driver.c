#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)56;
long long int var_3 = 7865312612626365436LL;
short var_4 = (short)-9254;
long long int var_5 = -550615074909706128LL;
long long int var_8 = 4424640415073565484LL;
signed char var_10 = (signed char)99;
signed char var_12 = (signed char)40;
int zero = 0;
short var_13 = (short)24940;
unsigned char var_14 = (unsigned char)56;
unsigned int var_15 = 2470464571U;
short var_16 = (short)-15534;
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
