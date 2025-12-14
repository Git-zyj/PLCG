#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -336866214;
unsigned long long int var_9 = 3859312097663236836ULL;
unsigned long long int var_10 = 11788721594185781424ULL;
long long int var_15 = -5083393690774381390LL;
unsigned int var_16 = 3615975993U;
int zero = 0;
int var_17 = -205960945;
unsigned char var_18 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
