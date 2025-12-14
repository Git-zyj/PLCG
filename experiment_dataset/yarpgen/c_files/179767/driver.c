#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1997267941;
short var_2 = (short)3648;
unsigned short var_8 = (unsigned short)48211;
int var_13 = -701196686;
unsigned char var_14 = (unsigned char)78;
short var_16 = (short)27315;
int zero = 0;
unsigned int var_20 = 1936909510U;
int var_21 = -181178103;
unsigned char var_22 = (unsigned char)94;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
