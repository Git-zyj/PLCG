#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14708986573773526864ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_7 = 841898914754337566ULL;
unsigned char var_9 = (unsigned char)134;
unsigned long long int var_10 = 3313259292820574921ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)227;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
