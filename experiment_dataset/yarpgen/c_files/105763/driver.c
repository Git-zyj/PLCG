#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3133533718U;
unsigned int var_9 = 1826289983U;
long long int var_12 = -659475290212161349LL;
long long int var_13 = 8870528967449076040LL;
int zero = 0;
unsigned long long int var_14 = 14764571292214896882ULL;
unsigned long long int var_15 = 15980818109564519039ULL;
void init() {
}

void checksum() {
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
