#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3200115450829671481ULL;
unsigned long long int var_1 = 4510436271859175630ULL;
signed char var_3 = (signed char)28;
unsigned long long int var_4 = 8076463338576286557ULL;
short var_8 = (short)-5257;
int zero = 0;
short var_10 = (short)-30631;
int var_11 = -815495884;
long long int var_12 = -3881257481773385729LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
