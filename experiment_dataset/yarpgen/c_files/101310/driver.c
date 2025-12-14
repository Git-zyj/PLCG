#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11751452039421091360ULL;
unsigned long long int var_3 = 16584724882155131263ULL;
unsigned long long int var_4 = 2276310683849404610ULL;
unsigned int var_5 = 17420391U;
unsigned short var_8 = (unsigned short)29040;
unsigned short var_11 = (unsigned short)30634;
int zero = 0;
unsigned long long int var_12 = 11929720311512787216ULL;
long long int var_13 = 3071190842914141324LL;
unsigned int var_14 = 1237836492U;
signed char var_15 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
