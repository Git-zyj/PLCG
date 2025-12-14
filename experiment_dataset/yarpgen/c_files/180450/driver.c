#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 351394393;
int var_1 = -265022243;
signed char var_6 = (signed char)-53;
long long int var_7 = -3733178147679695323LL;
signed char var_11 = (signed char)-79;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 1856120984U;
signed char var_16 = (signed char)28;
int zero = 0;
signed char var_18 = (signed char)-28;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)209;
signed char var_21 = (signed char)72;
int var_22 = 2005406721;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
