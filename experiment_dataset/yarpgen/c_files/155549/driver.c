#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1347970978;
signed char var_8 = (signed char)66;
unsigned long long int var_12 = 1425337494324869432ULL;
int zero = 0;
unsigned int var_13 = 2220655615U;
int var_14 = -395564997;
signed char var_15 = (signed char)100;
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
