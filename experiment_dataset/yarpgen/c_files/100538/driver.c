#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21916;
unsigned long long int var_2 = 11778321900921131729ULL;
int var_3 = -761287748;
int var_4 = -1683111961;
unsigned short var_6 = (unsigned short)45337;
unsigned int var_10 = 1107544770U;
unsigned int var_12 = 1810219554U;
unsigned int var_14 = 1334708126U;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = -908072325;
unsigned long long int var_17 = 9497551085130130178ULL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2328183081U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
