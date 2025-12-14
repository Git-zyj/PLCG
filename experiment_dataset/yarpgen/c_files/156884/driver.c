#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 383339425;
int var_2 = 1127187804;
signed char var_3 = (signed char)9;
int var_8 = 1404865767;
signed char var_9 = (signed char)17;
int var_10 = -65547113;
int var_11 = -1063240822;
int zero = 0;
signed char var_12 = (signed char)65;
int var_13 = 1859549567;
signed char var_14 = (signed char)32;
void init() {
}

void checksum() {
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
