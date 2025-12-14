#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7121352418235492363LL;
unsigned int var_3 = 2751996111U;
unsigned char var_6 = (unsigned char)186;
short var_7 = (short)2826;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)62475;
int zero = 0;
unsigned int var_15 = 2222224773U;
unsigned int var_16 = 278987263U;
void init() {
}

void checksum() {
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
