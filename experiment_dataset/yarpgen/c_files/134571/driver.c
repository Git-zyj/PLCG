#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)24;
unsigned int var_9 = 3478247006U;
long long int var_11 = -2448850735088374651LL;
long long int var_12 = 8594787024348135494LL;
int zero = 0;
short var_14 = (short)17101;
long long int var_15 = 4283974721537708557LL;
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
