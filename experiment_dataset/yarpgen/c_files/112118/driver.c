#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 978308593U;
unsigned int var_2 = 1948752630U;
unsigned long long int var_5 = 10545702219310855735ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 3912282157U;
int zero = 0;
int var_15 = 1565507678;
unsigned char var_16 = (unsigned char)187;
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
