#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5256404593825473723ULL;
_Bool var_8 = (_Bool)1;
long long int var_10 = 7188381673322705513LL;
int zero = 0;
unsigned long long int var_13 = 8438150498605472817ULL;
long long int var_14 = 6206082349138496186LL;
int var_15 = -243249234;
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
