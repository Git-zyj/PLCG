#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-82;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 17065382533947837ULL;
unsigned char var_20 = (unsigned char)131;
void init() {
}

void checksum() {
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
