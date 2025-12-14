#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 109480033490765397LL;
long long int var_8 = -3557233514442306108LL;
unsigned char var_14 = (unsigned char)200;
long long int var_15 = 4612197657577427143LL;
int zero = 0;
long long int var_19 = -6444692314627853095LL;
long long int var_20 = -1996223384407328852LL;
long long int var_21 = 5647008445144023126LL;
unsigned char var_22 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
