#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26409;
signed char var_1 = (signed char)89;
long long int var_4 = 788461224141839793LL;
unsigned int var_11 = 2596153522U;
signed char var_13 = (signed char)-81;
int zero = 0;
unsigned int var_14 = 2436866299U;
short var_15 = (short)-2901;
unsigned long long int var_16 = 13685331242088707019ULL;
void init() {
}

void checksum() {
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
