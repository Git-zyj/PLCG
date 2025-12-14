#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3923919094241905659LL;
unsigned int var_8 = 3971836721U;
unsigned long long int var_10 = 15707411603041088015ULL;
unsigned int var_14 = 39612152U;
int zero = 0;
unsigned int var_19 = 3698187219U;
unsigned int var_20 = 2767597747U;
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
