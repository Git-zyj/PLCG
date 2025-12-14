#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3478277557388214990ULL;
long long int var_14 = -4715771628750012208LL;
int zero = 0;
unsigned long long int var_15 = 1444530072565405482ULL;
signed char var_16 = (signed char)-109;
short var_17 = (short)15712;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
