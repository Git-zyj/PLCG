#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 4533847455645823236ULL;
unsigned long long int var_11 = 4844902299492265595ULL;
short var_12 = (short)32296;
int zero = 0;
signed char var_15 = (signed char)43;
short var_16 = (short)10073;
signed char var_17 = (signed char)-95;
unsigned long long int var_18 = 11219066522431172993ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
