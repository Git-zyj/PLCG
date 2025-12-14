#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7464452898622831474ULL;
signed char var_1 = (signed char)51;
signed char var_5 = (signed char)-81;
unsigned long long int var_7 = 12575067070736868250ULL;
unsigned char var_8 = (unsigned char)206;
int zero = 0;
int var_13 = -1826525134;
unsigned int var_14 = 1775716300U;
unsigned int var_15 = 2947896612U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
