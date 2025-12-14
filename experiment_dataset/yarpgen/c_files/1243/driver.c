#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6306081311179668937LL;
int var_8 = 1916234154;
unsigned int var_10 = 2257468208U;
int var_11 = 362345496;
unsigned long long int var_14 = 17476557132054016670ULL;
int zero = 0;
unsigned long long int var_15 = 1705624628717434398ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 9884955561323795075ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
