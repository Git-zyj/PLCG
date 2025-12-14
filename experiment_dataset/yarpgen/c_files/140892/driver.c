#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11850986875401079819ULL;
short var_7 = (short)-22011;
unsigned long long int var_17 = 18086338867265018130ULL;
int zero = 0;
int var_19 = 1976342533;
unsigned long long int var_20 = 6961824301674604572ULL;
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
