#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)45;
int var_4 = -1748856747;
signed char var_7 = (signed char)37;
int var_12 = 1538446869;
int var_13 = 1221629309;
int var_15 = -1994467227;
int zero = 0;
int var_16 = 173107623;
int var_17 = 19017049;
int var_18 = 81397316;
int var_19 = 619125431;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
