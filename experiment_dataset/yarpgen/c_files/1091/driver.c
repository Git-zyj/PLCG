#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24575;
unsigned char var_4 = (unsigned char)50;
int var_8 = -1648004133;
long long int var_16 = 5314007499046813763LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 11862511222756950762ULL;
unsigned int var_21 = 1703802286U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
