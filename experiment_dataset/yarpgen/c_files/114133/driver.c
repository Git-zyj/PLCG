#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1117732162U;
short var_15 = (short)20344;
signed char var_17 = (signed char)-26;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_20 = (short)31902;
short var_21 = (short)-22167;
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
