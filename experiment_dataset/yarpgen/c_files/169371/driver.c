#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1865962U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 2555986071726754147ULL;
unsigned long long int var_8 = 11962961458284363815ULL;
int zero = 0;
unsigned int var_10 = 1988233055U;
unsigned short var_11 = (unsigned short)47038;
unsigned char var_12 = (unsigned char)56;
signed char var_13 = (signed char)-103;
int var_14 = 1869926737;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
