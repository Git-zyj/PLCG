#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 851703786932320509ULL;
unsigned char var_2 = (unsigned char)30;
unsigned int var_6 = 836334642U;
int zero = 0;
unsigned long long int var_10 = 12596813294289342852ULL;
long long int var_11 = 9195158070342728324LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
