#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28203;
long long int var_8 = -581155244228527212LL;
unsigned long long int var_10 = 8771448756314846867ULL;
int zero = 0;
unsigned int var_15 = 2979212240U;
short var_16 = (short)2059;
void init() {
}

void checksum() {
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
