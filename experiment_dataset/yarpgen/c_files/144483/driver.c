#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 505430461;
int var_5 = -2138125897;
short var_11 = (short)-24440;
unsigned long long int var_15 = 2057775786843967561ULL;
int var_16 = 803543338;
int zero = 0;
signed char var_18 = (signed char)30;
unsigned short var_19 = (unsigned short)56556;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
