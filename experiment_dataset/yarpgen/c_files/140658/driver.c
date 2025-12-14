#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1774253537715816167LL;
unsigned long long int var_3 = 13305984885397467912ULL;
int zero = 0;
int var_10 = -1496951053;
unsigned long long int var_11 = 9895500766173014924ULL;
unsigned int var_12 = 742120633U;
unsigned char var_13 = (unsigned char)230;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
