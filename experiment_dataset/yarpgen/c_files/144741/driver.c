#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)107;
signed char var_3 = (signed char)95;
signed char var_7 = (signed char)-95;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 2374557199U;
int zero = 0;
unsigned int var_14 = 1891147071U;
unsigned char var_15 = (unsigned char)59;
unsigned short var_16 = (unsigned short)566;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
