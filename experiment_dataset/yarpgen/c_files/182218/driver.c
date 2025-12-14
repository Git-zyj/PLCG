#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_5 = (signed char)-94;
_Bool var_6 = (_Bool)1;
unsigned short var_10 = (unsigned short)3246;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-21128;
unsigned short var_13 = (unsigned short)44130;
unsigned long long int var_14 = 5041168306008638015ULL;
short var_15 = (short)-16454;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
