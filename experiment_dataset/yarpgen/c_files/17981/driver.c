#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3162401265U;
unsigned long long int var_4 = 17623672787158005943ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1521881910U;
int zero = 0;
int var_13 = -584607225;
unsigned long long int var_14 = 5352706405008527151ULL;
int var_15 = -1337707570;
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
