#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -919304893;
unsigned int var_4 = 2596796091U;
unsigned int var_6 = 3683634237U;
int var_7 = -1890294194;
_Bool var_8 = (_Bool)1;
int var_9 = 413262780;
signed char var_13 = (signed char)99;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)23142;
void init() {
}

void checksum() {
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
