#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2197732286U;
unsigned short var_3 = (unsigned short)58065;
long long int var_9 = -8811615060340094270LL;
int var_11 = 961172959;
unsigned long long int var_15 = 16278862399240339593ULL;
short var_16 = (short)24932;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-16475;
int zero = 0;
unsigned long long int var_20 = 14293255379134297093ULL;
unsigned int var_21 = 3432199660U;
signed char var_22 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
