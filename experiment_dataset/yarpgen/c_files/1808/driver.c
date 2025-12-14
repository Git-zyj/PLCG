#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8495111583150433006ULL;
signed char var_2 = (signed char)91;
int var_12 = -953336171;
unsigned int var_13 = 2385980578U;
unsigned char var_14 = (unsigned char)227;
unsigned long long int var_16 = 7245372353348067187ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -2106163773;
void init() {
}

void checksum() {
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
