#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20163;
int var_1 = -295695668;
unsigned short var_3 = (unsigned short)59942;
unsigned int var_6 = 1410277534U;
long long int var_7 = 4421848108604809581LL;
unsigned long long int var_9 = 6279261032730033891ULL;
short var_10 = (short)13357;
unsigned int var_11 = 1529373060U;
long long int var_13 = 8641048708888815851LL;
int zero = 0;
short var_14 = (short)11537;
int var_15 = 176195743;
_Bool var_16 = (_Bool)0;
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
