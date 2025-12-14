#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58033;
int var_2 = -1015407080;
int var_4 = 882309073;
long long int var_5 = 2172428213331402529LL;
long long int var_7 = 7915126755558856223LL;
short var_8 = (short)17594;
unsigned long long int var_12 = 1214452711292891225ULL;
int zero = 0;
long long int var_13 = 3415179219053716016LL;
long long int var_14 = 2851078099868142348LL;
unsigned int var_15 = 3908862817U;
short var_16 = (short)1598;
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
