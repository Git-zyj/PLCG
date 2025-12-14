#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)46;
int var_3 = -1419966337;
unsigned char var_4 = (unsigned char)239;
long long int var_5 = -8004591325962615056LL;
unsigned int var_6 = 3445616503U;
unsigned long long int var_14 = 4928439817577873209ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 3289255383528615493ULL;
short var_17 = (short)-3721;
short var_18 = (short)27934;
void init() {
}

void checksum() {
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
