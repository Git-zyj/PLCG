#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45926;
int var_2 = 1114387187;
unsigned short var_9 = (unsigned short)2754;
_Bool var_12 = (_Bool)1;
int var_13 = -1637899405;
unsigned short var_14 = (unsigned short)56049;
int zero = 0;
unsigned short var_20 = (unsigned short)45433;
unsigned char var_21 = (unsigned char)176;
unsigned int var_22 = 1952608452U;
int var_23 = -772261396;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
