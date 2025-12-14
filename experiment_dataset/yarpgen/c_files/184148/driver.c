#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)162;
signed char var_3 = (signed char)97;
unsigned char var_8 = (unsigned char)102;
int zero = 0;
short var_10 = (short)23512;
_Bool var_11 = (_Bool)1;
int var_12 = -1433296185;
unsigned int var_13 = 1169706562U;
unsigned char var_14 = (unsigned char)232;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
