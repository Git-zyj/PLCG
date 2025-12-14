#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 35953684432349308ULL;
long long int var_7 = -8978283741776538645LL;
signed char var_10 = (signed char)16;
int zero = 0;
signed char var_14 = (signed char)10;
unsigned long long int var_15 = 3305937204520689169ULL;
void init() {
}

void checksum() {
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
