#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1992251242U;
unsigned char var_5 = (unsigned char)190;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-13;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)77;
unsigned short var_11 = (unsigned short)29536;
unsigned char var_12 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
