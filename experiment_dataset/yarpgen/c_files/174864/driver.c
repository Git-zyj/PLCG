#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9351038539904610236ULL;
int var_1 = 560704096;
_Bool var_3 = (_Bool)0;
unsigned char var_10 = (unsigned char)185;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 16370063454675632355ULL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
