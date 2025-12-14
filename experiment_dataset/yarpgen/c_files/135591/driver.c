#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -329213552;
unsigned int var_4 = 1878444410U;
unsigned long long int var_10 = 245375685412892030ULL;
int var_12 = 1404213011;
int zero = 0;
unsigned short var_16 = (unsigned short)49197;
unsigned short var_17 = (unsigned short)6833;
short var_18 = (short)18303;
long long int var_19 = 8537819202146320985LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
