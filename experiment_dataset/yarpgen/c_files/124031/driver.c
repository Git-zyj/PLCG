#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)87;
int var_12 = 1266486372;
long long int var_13 = -3981645961480784954LL;
unsigned int var_16 = 3791643593U;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 901117610;
unsigned char var_19 = (unsigned char)28;
unsigned short var_20 = (unsigned short)59165;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
