#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)213;
unsigned long long int var_2 = 12926410404597567735ULL;
signed char var_3 = (signed char)33;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
signed char var_10 = (signed char)-68;
unsigned short var_12 = (unsigned short)42716;
long long int var_14 = 4874418126452977241LL;
unsigned char var_15 = (unsigned char)190;
int var_16 = 588578973;
int zero = 0;
signed char var_17 = (signed char)51;
int var_18 = 1998740034;
void init() {
}

void checksum() {
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
