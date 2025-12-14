#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29689;
int var_2 = 1978895674;
unsigned long long int var_5 = 4676719320898332527ULL;
long long int var_9 = 8857528698311204035LL;
signed char var_10 = (signed char)-110;
int zero = 0;
int var_11 = 975352541;
unsigned int var_12 = 3550716146U;
int var_13 = 1125174493;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
