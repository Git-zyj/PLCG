#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1550137047U;
unsigned short var_5 = (unsigned short)209;
unsigned long long int var_7 = 10846517603552221386ULL;
int var_12 = -1769485490;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 3765981416U;
int zero = 0;
unsigned char var_16 = (unsigned char)129;
long long int var_17 = -6487262266980750905LL;
_Bool var_18 = (_Bool)0;
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
