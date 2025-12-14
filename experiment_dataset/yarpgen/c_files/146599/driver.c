#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14976017204178813458ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_6 = (unsigned short)29535;
short var_14 = (short)-10179;
unsigned long long int var_15 = 2461662785398608742ULL;
int var_16 = -1351713801;
int var_17 = -177537036;
short var_19 = (short)-314;
int zero = 0;
signed char var_20 = (signed char)-120;
short var_21 = (short)-28845;
unsigned long long int var_22 = 1070597365711081132ULL;
signed char var_23 = (signed char)23;
unsigned long long int var_24 = 1755961723893454368ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
