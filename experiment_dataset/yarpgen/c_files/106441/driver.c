#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 338288927U;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-44;
unsigned long long int var_7 = 5028807777640607329ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_13 = (unsigned char)238;
int zero = 0;
unsigned int var_15 = 3863526636U;
int var_16 = 145824857;
unsigned long long int var_17 = 15299412343915753389ULL;
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
