#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1721882584;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)166;
int var_15 = -382653599;
int zero = 0;
int var_16 = 2065418704;
int var_17 = -1868847644;
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
