#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24905;
unsigned long long int var_3 = 1149017270846961580ULL;
_Bool var_7 = (_Bool)1;
short var_11 = (short)28899;
int zero = 0;
short var_13 = (short)11604;
signed char var_14 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
