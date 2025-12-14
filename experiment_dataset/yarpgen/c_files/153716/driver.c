#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1559977814U;
unsigned long long int var_8 = 10753123910306501052ULL;
_Bool var_9 = (_Bool)0;
int var_11 = 779858837;
short var_15 = (short)-9640;
int zero = 0;
unsigned int var_16 = 1982108173U;
int var_17 = -2101584148;
unsigned char var_18 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
