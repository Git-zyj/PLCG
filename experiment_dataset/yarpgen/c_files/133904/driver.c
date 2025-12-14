#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 474893830;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)236;
unsigned int var_5 = 3293846964U;
unsigned short var_6 = (unsigned short)28214;
int var_9 = -1691164809;
unsigned char var_10 = (unsigned char)128;
long long int var_12 = -7277997265702280272LL;
int zero = 0;
short var_13 = (short)-30249;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
long long int var_16 = -3772656021483653606LL;
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
