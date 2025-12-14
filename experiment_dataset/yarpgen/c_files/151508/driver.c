#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8963831778444227902LL;
unsigned long long int var_3 = 1745876291108984880ULL;
signed char var_5 = (signed char)-16;
signed char var_6 = (signed char)39;
unsigned int var_12 = 2570264782U;
int zero = 0;
signed char var_13 = (signed char)59;
unsigned int var_14 = 451948662U;
signed char var_15 = (signed char)-13;
unsigned int var_16 = 3608754531U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
