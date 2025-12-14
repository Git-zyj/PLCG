#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1325383251U;
int var_5 = -808656530;
unsigned int var_7 = 417954791U;
signed char var_9 = (signed char)-119;
unsigned char var_10 = (unsigned char)140;
long long int var_11 = 944691890202751587LL;
int zero = 0;
unsigned char var_14 = (unsigned char)15;
unsigned long long int var_15 = 12623921337709992623ULL;
unsigned char var_16 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
