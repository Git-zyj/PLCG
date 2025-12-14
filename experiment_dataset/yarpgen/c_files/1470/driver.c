#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8658540755156765874LL;
unsigned int var_5 = 499994804U;
short var_13 = (short)-2155;
unsigned int var_15 = 4268586862U;
_Bool var_16 = (_Bool)0;
short var_18 = (short)7408;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-13186;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
