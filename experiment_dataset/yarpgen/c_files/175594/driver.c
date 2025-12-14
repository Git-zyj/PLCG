#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2702931718U;
unsigned int var_5 = 67314536U;
unsigned int var_6 = 742000189U;
unsigned long long int var_7 = 1564431347953986626ULL;
unsigned long long int var_9 = 11229288603048278701ULL;
int zero = 0;
signed char var_13 = (signed char)-101;
unsigned long long int var_14 = 1791260754644563936ULL;
unsigned long long int var_15 = 16271806663665383293ULL;
signed char var_16 = (signed char)104;
void init() {
}

void checksum() {
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
