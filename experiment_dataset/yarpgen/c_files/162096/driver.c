#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2286667389U;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)63;
unsigned long long int var_11 = 10986709909519087613ULL;
int zero = 0;
signed char var_12 = (signed char)-12;
int var_13 = -1035153534;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
