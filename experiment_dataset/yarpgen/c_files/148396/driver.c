#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3781129684480553494ULL;
signed char var_3 = (signed char)-23;
unsigned int var_4 = 2630518074U;
short var_6 = (short)25901;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-11475;
unsigned int var_11 = 4050114425U;
int var_17 = 1822357998;
int zero = 0;
signed char var_18 = (signed char)32;
int var_19 = -2136261650;
signed char var_20 = (signed char)-17;
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
