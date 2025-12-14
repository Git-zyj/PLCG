#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)2062;
unsigned int var_15 = 2214201064U;
unsigned long long int var_18 = 11796366611762885227ULL;
int zero = 0;
unsigned long long int var_19 = 724826949922303764ULL;
long long int var_20 = 1909984757858958156LL;
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
