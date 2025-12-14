#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-114;
unsigned int var_3 = 101960469U;
unsigned long long int var_4 = 2914383564572573295ULL;
unsigned short var_6 = (unsigned short)42897;
unsigned long long int var_11 = 9989728322505494061ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 2993090465176220303LL;
short var_16 = (short)16058;
long long int var_17 = 1657173615969353207LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
