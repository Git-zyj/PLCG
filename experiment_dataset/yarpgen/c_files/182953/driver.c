#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-1082;
int var_4 = -461616606;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)37;
unsigned long long int var_9 = 3821931005518670058ULL;
int zero = 0;
short var_10 = (short)-17097;
int var_11 = 1524033245;
short var_12 = (short)2597;
short var_13 = (short)21658;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
