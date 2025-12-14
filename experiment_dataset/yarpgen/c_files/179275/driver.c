#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16104337127657109906ULL;
unsigned char var_2 = (unsigned char)200;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)124;
unsigned short var_8 = (unsigned short)36907;
long long int var_9 = -6592093668241506348LL;
short var_12 = (short)31223;
int zero = 0;
long long int var_13 = 7218960944046922883LL;
unsigned int var_14 = 568039729U;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)243;
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
