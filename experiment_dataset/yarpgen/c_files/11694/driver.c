#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1761003268U;
unsigned int var_1 = 3139968872U;
long long int var_3 = -1695575916023310076LL;
unsigned int var_4 = 3886271139U;
unsigned long long int var_5 = 9791304768591449098ULL;
int var_7 = 1574652275;
unsigned char var_8 = (unsigned char)232;
int zero = 0;
short var_11 = (short)30642;
short var_12 = (short)20242;
unsigned long long int var_13 = 14515767992355908974ULL;
short var_14 = (short)-25550;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
