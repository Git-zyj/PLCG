#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)22;
int zero = 0;
unsigned long long int var_10 = 9251359273120763559ULL;
unsigned long long int var_11 = 5465362733500652538ULL;
unsigned long long int var_12 = 17221804010684676079ULL;
unsigned long long int var_13 = 5866088333815721334ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
