#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9531;
unsigned int var_2 = 1040540109U;
unsigned long long int var_5 = 11984833372653795921ULL;
short var_8 = (short)13915;
signed char var_9 = (signed char)29;
int zero = 0;
unsigned char var_11 = (unsigned char)127;
unsigned int var_12 = 1281780115U;
short var_13 = (short)6774;
short var_14 = (short)6030;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
