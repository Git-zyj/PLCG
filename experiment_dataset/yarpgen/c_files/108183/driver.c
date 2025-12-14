#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33535;
signed char var_1 = (signed char)37;
short var_3 = (short)-22498;
unsigned short var_4 = (unsigned short)26819;
unsigned short var_5 = (unsigned short)38436;
unsigned short var_6 = (unsigned short)24019;
unsigned int var_7 = 2725957247U;
unsigned long long int var_9 = 1207657245754924330ULL;
unsigned short var_10 = (unsigned short)27789;
short var_11 = (short)20297;
int zero = 0;
int var_12 = 1052028446;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 1145354209746583475ULL;
signed char var_15 = (signed char)24;
unsigned short var_16 = (unsigned short)59355;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
