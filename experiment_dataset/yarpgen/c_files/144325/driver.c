#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1998121563U;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)28200;
long long int var_5 = -8686060602313975672LL;
int zero = 0;
unsigned short var_16 = (unsigned short)20327;
unsigned long long int var_17 = 6741079860523503725ULL;
unsigned short var_18 = (unsigned short)16677;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
