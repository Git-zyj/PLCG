#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -242854560;
unsigned char var_4 = (unsigned char)102;
short var_5 = (short)29209;
unsigned short var_7 = (unsigned short)1884;
int zero = 0;
unsigned short var_10 = (unsigned short)15570;
unsigned int var_11 = 2059873112U;
_Bool var_12 = (_Bool)1;
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
