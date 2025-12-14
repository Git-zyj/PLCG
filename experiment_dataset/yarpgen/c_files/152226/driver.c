#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)5170;
int var_6 = 936343769;
unsigned int var_9 = 1939477895U;
unsigned long long int var_11 = 17390132678294187009ULL;
unsigned char var_12 = (unsigned char)24;
long long int var_13 = -6530118965511525629LL;
unsigned int var_14 = 3138976602U;
int zero = 0;
long long int var_15 = 1205952681559973667LL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2090167825U;
void init() {
}

void checksum() {
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
