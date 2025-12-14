#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-109;
unsigned short var_11 = (unsigned short)47097;
short var_12 = (short)-28798;
unsigned long long int var_14 = 17742867912497503910ULL;
unsigned int var_15 = 103338677U;
int zero = 0;
signed char var_16 = (signed char)-104;
short var_17 = (short)-28659;
_Bool var_18 = (_Bool)1;
int var_19 = 1449092530;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
