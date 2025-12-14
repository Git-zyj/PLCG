#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1564191975;
int var_5 = -1144932200;
unsigned char var_6 = (unsigned char)115;
unsigned int var_9 = 2451001636U;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-6062;
short var_16 = (short)-7977;
int zero = 0;
unsigned int var_18 = 3893717110U;
signed char var_19 = (signed char)87;
unsigned int var_20 = 3267360810U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
