#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3417885072U;
unsigned long long int var_7 = 12415523481446397673ULL;
unsigned int var_13 = 1903485954U;
int zero = 0;
short var_16 = (short)4;
unsigned long long int var_17 = 2947777359003308365ULL;
void init() {
}

void checksum() {
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
