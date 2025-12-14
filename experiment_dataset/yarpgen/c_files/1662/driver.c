#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1874889020;
unsigned int var_5 = 1059551912U;
long long int var_10 = 6421129438953183392LL;
int zero = 0;
unsigned short var_13 = (unsigned short)56656;
unsigned int var_14 = 2752521506U;
void init() {
}

void checksum() {
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
