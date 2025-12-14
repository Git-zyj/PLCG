#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18007097089617450298ULL;
unsigned short var_3 = (unsigned short)8438;
_Bool var_5 = (_Bool)1;
int zero = 0;
short var_10 = (short)29812;
long long int var_11 = -2013236115592888780LL;
long long int var_12 = 5105933766115521142LL;
signed char var_13 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
