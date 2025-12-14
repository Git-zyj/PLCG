#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13874068438655740922ULL;
unsigned short var_6 = (unsigned short)36193;
unsigned short var_7 = (unsigned short)12903;
unsigned long long int var_11 = 17437349502808892279ULL;
int zero = 0;
int var_12 = -1870506302;
unsigned long long int var_13 = 17741770463805914944ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
