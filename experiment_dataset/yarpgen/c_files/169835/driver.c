#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1056675338200946642LL;
short var_2 = (short)30884;
int var_3 = 29567863;
signed char var_6 = (signed char)72;
unsigned long long int var_11 = 914856640527241656ULL;
int var_13 = 1776176554;
int zero = 0;
unsigned int var_14 = 1971332066U;
_Bool var_15 = (_Bool)0;
int var_16 = -203117078;
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
