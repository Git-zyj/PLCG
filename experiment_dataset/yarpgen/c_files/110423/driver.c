#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-18938;
unsigned int var_4 = 1625986436U;
unsigned char var_5 = (unsigned char)171;
unsigned int var_6 = 554418475U;
unsigned char var_11 = (unsigned char)238;
int zero = 0;
short var_12 = (short)18119;
int var_13 = 1000881903;
void init() {
}

void checksum() {
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
