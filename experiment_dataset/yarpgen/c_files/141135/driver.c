#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
signed char var_12 = (signed char)-68;
signed char var_13 = (signed char)120;
int zero = 0;
unsigned short var_18 = (unsigned short)12498;
unsigned long long int var_19 = 14934287754965508016ULL;
unsigned int var_20 = 2956395802U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
