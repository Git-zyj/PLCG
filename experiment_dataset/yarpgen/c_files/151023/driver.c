#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16106440085305628447ULL;
unsigned long long int var_5 = 11932999668292743077ULL;
unsigned int var_9 = 2190852155U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 1339351179U;
unsigned char var_14 = (unsigned char)3;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
