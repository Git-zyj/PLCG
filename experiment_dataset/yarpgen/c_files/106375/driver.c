#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-17174;
signed char var_5 = (signed char)81;
long long int var_10 = 4471387004904339744LL;
short var_11 = (short)-7488;
int zero = 0;
long long int var_15 = -8665094203811343525LL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-17;
long long int var_18 = -2255130747692581382LL;
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
