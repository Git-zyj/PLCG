#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)58;
unsigned long long int var_2 = 16530661120780694572ULL;
short var_3 = (short)24578;
unsigned long long int var_7 = 1938603285832586446ULL;
signed char var_10 = (signed char)97;
unsigned long long int var_16 = 1616813958351556401ULL;
unsigned long long int var_18 = 11243098138474196397ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 5479671987017432386ULL;
short var_21 = (short)14439;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
