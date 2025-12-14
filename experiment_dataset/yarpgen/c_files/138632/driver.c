#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1516682515U;
int var_2 = -385715461;
long long int var_4 = 7226189344232121055LL;
short var_5 = (short)-21470;
unsigned long long int var_7 = 798545368453223912ULL;
int zero = 0;
unsigned int var_14 = 3341742725U;
int var_15 = -1084871122;
short var_16 = (short)14240;
unsigned int var_17 = 1036744010U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
