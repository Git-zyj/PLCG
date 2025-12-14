#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -848460826;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1219053918U;
short var_9 = (short)8901;
unsigned char var_10 = (unsigned char)98;
int zero = 0;
int var_20 = -1554943545;
long long int var_21 = -8472899250400881770LL;
long long int var_22 = -4310839054696930391LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
