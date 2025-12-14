#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3621702939811500315LL;
unsigned int var_3 = 1387396338U;
short var_5 = (short)-7315;
unsigned long long int var_6 = 14697741237942248755ULL;
unsigned long long int var_8 = 2752022099276324228ULL;
unsigned long long int var_9 = 2152290650381452203ULL;
int zero = 0;
long long int var_10 = -8811200123435170841LL;
long long int var_11 = -6250984909313092795LL;
unsigned char var_12 = (unsigned char)206;
unsigned char var_13 = (unsigned char)20;
unsigned int var_14 = 1272616818U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
