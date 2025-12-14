#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)7506;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-11;
short var_11 = (short)-7818;
signed char var_14 = (signed char)112;
short var_15 = (short)234;
int zero = 0;
short var_17 = (short)-30798;
long long int var_18 = -7800310589956919928LL;
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
