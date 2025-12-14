#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -265037487036983671LL;
unsigned long long int var_2 = 2108457417553119984ULL;
unsigned short var_4 = (unsigned short)51667;
unsigned short var_12 = (unsigned short)54940;
int var_13 = -784690533;
signed char var_14 = (signed char)-61;
int zero = 0;
int var_15 = 1607715684;
int var_16 = 2029001832;
void init() {
}

void checksum() {
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
