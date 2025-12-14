#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)105;
unsigned long long int var_4 = 15914205299174699165ULL;
unsigned short var_5 = (unsigned short)23508;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 2780437946U;
int zero = 0;
int var_13 = -260404941;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-28823;
void init() {
}

void checksum() {
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
