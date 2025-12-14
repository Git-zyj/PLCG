#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_5 = 669489233608091273ULL;
unsigned short var_7 = (unsigned short)52817;
unsigned long long int var_8 = 7270348528449195797ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)33;
unsigned short var_15 = (unsigned short)15754;
unsigned int var_16 = 4291702086U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
