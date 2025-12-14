#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2947754553U;
short var_6 = (short)22471;
int var_7 = 1445932077;
int var_8 = 3227374;
unsigned long long int var_9 = 10550620040454737997ULL;
int zero = 0;
int var_11 = -1832913517;
unsigned long long int var_12 = 4684360252228855909ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
