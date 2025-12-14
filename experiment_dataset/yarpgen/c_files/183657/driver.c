#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -207409336;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)42;
unsigned int var_12 = 3048579817U;
unsigned char var_14 = (unsigned char)13;
int zero = 0;
short var_15 = (short)-1444;
short var_16 = (short)1110;
void init() {
}

void checksum() {
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
