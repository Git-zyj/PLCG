#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1527435497;
unsigned short var_2 = (unsigned short)6298;
_Bool var_4 = (_Bool)1;
short var_8 = (short)-24492;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-19258;
int zero = 0;
int var_18 = -1839065289;
unsigned short var_19 = (unsigned short)24369;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
