#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_5 = (short)32257;
short var_10 = (short)-25838;
unsigned short var_12 = (unsigned short)65096;
int zero = 0;
unsigned short var_18 = (unsigned short)63028;
unsigned char var_19 = (unsigned char)29;
signed char var_20 = (signed char)28;
int var_21 = -54917052;
unsigned short var_22 = (unsigned short)44797;
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
