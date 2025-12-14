#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 494522809U;
unsigned char var_3 = (unsigned char)43;
unsigned char var_4 = (unsigned char)178;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)217;
int zero = 0;
signed char var_12 = (signed char)3;
unsigned char var_13 = (unsigned char)182;
signed char var_14 = (signed char)33;
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
