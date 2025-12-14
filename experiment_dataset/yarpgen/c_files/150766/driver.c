#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3738350974U;
unsigned char var_2 = (unsigned char)46;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 3423173268U;
short var_11 = (short)3396;
unsigned char var_12 = (unsigned char)244;
short var_13 = (short)-7526;
int zero = 0;
long long int var_14 = 4821368521851534058LL;
unsigned int var_15 = 922094047U;
_Bool var_16 = (_Bool)0;
long long int var_17 = -8692684276257243274LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
