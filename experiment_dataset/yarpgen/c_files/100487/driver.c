#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11504;
unsigned short var_6 = (unsigned short)21372;
long long int var_8 = -8386820659237887985LL;
signed char var_10 = (signed char)87;
unsigned int var_11 = 277767789U;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-99;
unsigned short var_17 = (unsigned short)40776;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
