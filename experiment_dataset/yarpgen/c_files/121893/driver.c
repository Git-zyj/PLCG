#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2870333631U;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)115;
unsigned int var_8 = 1782089088U;
int zero = 0;
unsigned short var_10 = (unsigned short)6053;
unsigned char var_11 = (unsigned char)218;
signed char var_12 = (signed char)109;
unsigned int var_13 = 3159547648U;
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
