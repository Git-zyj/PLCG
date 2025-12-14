#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2713349805U;
_Bool var_4 = (_Bool)1;
unsigned int var_8 = 1211564135U;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)11171;
short var_14 = (short)-6007;
void init() {
}

void checksum() {
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
