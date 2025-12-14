#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2521622181754030415ULL;
long long int var_1 = -8567081245056021369LL;
unsigned int var_3 = 114385331U;
int var_4 = 768839085;
unsigned long long int var_6 = 14743963415352655771ULL;
int zero = 0;
unsigned int var_11 = 3003642935U;
unsigned char var_12 = (unsigned char)32;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
