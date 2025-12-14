#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61344;
unsigned long long int var_1 = 17206152874203494270ULL;
long long int var_2 = 4628637052285757151LL;
unsigned int var_4 = 1488389061U;
short var_8 = (short)6942;
_Bool var_11 = (_Bool)1;
int var_12 = -164735901;
unsigned int var_13 = 3641314850U;
int zero = 0;
unsigned int var_15 = 2194920228U;
int var_16 = -636929765;
long long int var_17 = -2535173003097155097LL;
int var_18 = 989517953;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
