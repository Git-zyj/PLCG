#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)249;
unsigned long long int var_2 = 13218403948228909763ULL;
unsigned char var_4 = (unsigned char)128;
long long int var_5 = 7478224403649807132LL;
unsigned char var_6 = (unsigned char)243;
unsigned int var_8 = 874671495U;
int var_9 = 1883599476;
int zero = 0;
long long int var_15 = 4983375494858765685LL;
unsigned char var_16 = (unsigned char)249;
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
