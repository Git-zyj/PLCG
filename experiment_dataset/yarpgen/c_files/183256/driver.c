#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1079474664U;
unsigned short var_1 = (unsigned short)39481;
unsigned int var_9 = 2425577464U;
_Bool var_10 = (_Bool)0;
signed char var_14 = (signed char)45;
int zero = 0;
unsigned char var_16 = (unsigned char)39;
int var_17 = -734829560;
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
