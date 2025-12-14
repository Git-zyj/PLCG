#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4668991966372663830ULL;
unsigned int var_1 = 2285836559U;
unsigned int var_3 = 382216856U;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 10178480099588299661ULL;
unsigned int var_11 = 2800967630U;
short var_14 = (short)-22085;
int zero = 0;
unsigned int var_16 = 2616521596U;
unsigned int var_17 = 3794719100U;
void init() {
}

void checksum() {
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
