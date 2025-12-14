#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8970453477815905119ULL;
unsigned short var_3 = (unsigned short)24628;
unsigned int var_10 = 2595459813U;
unsigned int var_15 = 2017137332U;
int zero = 0;
unsigned long long int var_18 = 7153013769708897354ULL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)22280;
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
