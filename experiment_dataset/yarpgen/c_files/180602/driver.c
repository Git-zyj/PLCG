#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28186;
int var_2 = -386370239;
unsigned int var_3 = 2975520985U;
unsigned char var_4 = (unsigned char)236;
_Bool var_5 = (_Bool)1;
int var_8 = 1437931910;
unsigned short var_9 = (unsigned short)51648;
unsigned short var_10 = (unsigned short)62379;
unsigned int var_11 = 300543449U;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = -740761147;
unsigned char var_15 = (unsigned char)77;
unsigned short var_16 = (unsigned short)43004;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
