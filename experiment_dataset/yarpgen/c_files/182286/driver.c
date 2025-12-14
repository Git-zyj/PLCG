#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-26734;
signed char var_5 = (signed char)13;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3542675124U;
unsigned short var_15 = (unsigned short)60810;
unsigned int var_16 = 3827169672U;
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
