#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)38215;
unsigned int var_6 = 168118307U;
int var_7 = 442935376;
unsigned int var_13 = 1816632095U;
unsigned int var_15 = 2893122084U;
int zero = 0;
int var_17 = -1968568293;
int var_18 = 217329491;
unsigned long long int var_19 = 5219682957630773563ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
