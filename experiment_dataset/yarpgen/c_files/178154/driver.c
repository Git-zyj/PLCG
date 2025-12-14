#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -112708317454799538LL;
_Bool var_1 = (_Bool)0;
unsigned int var_5 = 591818175U;
_Bool var_6 = (_Bool)1;
short var_9 = (short)3471;
long long int var_10 = 2838675044434660023LL;
int zero = 0;
short var_11 = (short)-24551;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)50745;
unsigned char var_14 = (unsigned char)159;
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
