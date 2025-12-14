#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4911860971742314676LL;
unsigned long long int var_3 = 11999335664365118368ULL;
long long int var_9 = -668257990126936125LL;
int var_10 = 944873695;
unsigned char var_15 = (unsigned char)247;
int zero = 0;
long long int var_20 = 8151817340145711076LL;
short var_21 = (short)11106;
unsigned int var_22 = 3913692336U;
long long int var_23 = -3483580058738648902LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
