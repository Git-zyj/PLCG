#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48099;
unsigned long long int var_3 = 11227150907952234734ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)52720;
unsigned int var_15 = 3001681253U;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 1249234148U;
unsigned short var_21 = (unsigned short)40275;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
