#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2155889347U;
unsigned char var_1 = (unsigned char)100;
int var_5 = 1515882795;
int zero = 0;
unsigned int var_11 = 3073083330U;
signed char var_12 = (signed char)127;
_Bool var_13 = (_Bool)0;
int var_14 = -28112177;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
