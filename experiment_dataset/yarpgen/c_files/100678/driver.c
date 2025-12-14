#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3459887835110526460ULL;
unsigned long long int var_1 = 15326776989422934632ULL;
short var_4 = (short)27965;
unsigned long long int var_10 = 17037223961161976770ULL;
int zero = 0;
signed char var_19 = (signed char)-22;
unsigned int var_20 = 2735987572U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
