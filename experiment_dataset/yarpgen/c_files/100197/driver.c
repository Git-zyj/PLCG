#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4372231865355120759LL;
unsigned long long int var_1 = 8918233237202561684ULL;
signed char var_2 = (signed char)-111;
unsigned long long int var_4 = 7270209511368117739ULL;
unsigned int var_10 = 3719621966U;
unsigned int var_12 = 257745806U;
int var_14 = 1843137130;
int zero = 0;
signed char var_16 = (signed char)-111;
unsigned int var_17 = 2694474442U;
unsigned int var_18 = 38162959U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
