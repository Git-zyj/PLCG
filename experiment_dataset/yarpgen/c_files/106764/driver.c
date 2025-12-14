#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -7959765948170651583LL;
unsigned long long int var_10 = 2040838737530732486ULL;
unsigned long long int var_12 = 5007250326929619690ULL;
int zero = 0;
unsigned int var_14 = 4120083509U;
unsigned int var_15 = 2438210862U;
long long int var_16 = -944893532056218883LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
