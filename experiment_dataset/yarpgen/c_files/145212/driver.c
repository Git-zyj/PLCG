#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 448827647;
long long int var_5 = -4052681651550081565LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 14504546795142710490ULL;
unsigned int var_14 = 2477270691U;
int zero = 0;
long long int var_15 = -2553902544819772886LL;
int var_16 = -919984834;
unsigned int var_17 = 2095132653U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
