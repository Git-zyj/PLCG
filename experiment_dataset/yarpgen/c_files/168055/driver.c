#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1137479831U;
unsigned long long int var_13 = 5223973783424009661ULL;
short var_14 = (short)-25516;
int zero = 0;
unsigned long long int var_19 = 8449266179929849481ULL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-23266;
signed char var_22 = (signed char)93;
int var_23 = -2026397143;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
