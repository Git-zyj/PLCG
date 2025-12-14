#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6907;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 1445417985U;
unsigned short var_9 = (unsigned short)7421;
short var_10 = (short)-29759;
int zero = 0;
int var_17 = 496098512;
unsigned int var_18 = 2049304205U;
long long int var_19 = 7355047817648281885LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
