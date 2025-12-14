#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1303201202;
long long int var_4 = 4915722589999607610LL;
long long int var_6 = 7496724363935175178LL;
unsigned int var_8 = 1230184532U;
long long int var_9 = -5667426079100609730LL;
short var_10 = (short)-5488;
short var_14 = (short)14997;
int zero = 0;
unsigned char var_15 = (unsigned char)213;
unsigned short var_16 = (unsigned short)55020;
_Bool var_17 = (_Bool)0;
short var_18 = (short)8704;
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
