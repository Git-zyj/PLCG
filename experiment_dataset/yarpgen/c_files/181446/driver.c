#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3900149382U;
unsigned int var_3 = 2358408518U;
unsigned long long int var_4 = 1240605488079003226ULL;
unsigned int var_6 = 1906458937U;
signed char var_12 = (signed char)4;
unsigned long long int var_15 = 13709003022246525200ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)34782;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)55183;
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
