#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3006;
unsigned int var_2 = 1171054785U;
long long int var_4 = 7104464256357484638LL;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)102;
unsigned int var_11 = 2657041712U;
long long int var_12 = 3060188343060342194LL;
unsigned short var_13 = (unsigned short)54698;
unsigned int var_15 = 1426266746U;
int zero = 0;
unsigned int var_16 = 3015568329U;
long long int var_17 = 4776029098411018583LL;
int var_18 = -904647002;
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
