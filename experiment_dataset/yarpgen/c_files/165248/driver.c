#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 250582683U;
long long int var_2 = -9139180893944809748LL;
unsigned int var_5 = 2802263726U;
unsigned long long int var_15 = 2332796326163792237ULL;
int zero = 0;
int var_17 = 590740155;
int var_18 = 1800655776;
void init() {
}

void checksum() {
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
