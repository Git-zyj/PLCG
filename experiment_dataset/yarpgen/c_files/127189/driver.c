#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2699527485U;
unsigned int var_1 = 4030921570U;
signed char var_2 = (signed char)(-127 - 1);
signed char var_3 = (signed char)105;
unsigned int var_4 = 768581982U;
signed char var_5 = (signed char)32;
short var_6 = (short)8198;
short var_7 = (short)26758;
signed char var_8 = (signed char)-12;
int zero = 0;
signed char var_10 = (signed char)93;
unsigned int var_11 = 1707202591U;
short var_12 = (short)-12906;
short var_13 = (short)-31474;
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
