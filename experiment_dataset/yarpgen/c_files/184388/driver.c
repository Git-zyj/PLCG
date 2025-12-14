#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 646866706;
signed char var_1 = (signed char)116;
signed char var_2 = (signed char)59;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-99;
unsigned short var_14 = (unsigned short)37830;
unsigned short var_15 = (unsigned short)1849;
int zero = 0;
short var_16 = (short)-12463;
unsigned int var_17 = 1209722965U;
unsigned int var_18 = 1203335419U;
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
