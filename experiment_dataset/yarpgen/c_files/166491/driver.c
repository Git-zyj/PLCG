#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11044456416981278785ULL;
unsigned long long int var_7 = 15066375761909213856ULL;
unsigned char var_8 = (unsigned char)227;
long long int var_9 = -1745070399096992690LL;
int zero = 0;
unsigned int var_12 = 4211177689U;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)20;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
