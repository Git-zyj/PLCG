#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3080881796U;
unsigned short var_16 = (unsigned short)28652;
long long int var_17 = 3581277393318427428LL;
int zero = 0;
unsigned int var_20 = 4203513265U;
int var_21 = 1058445058;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
