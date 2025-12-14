#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 3718119040809475856ULL;
unsigned int var_3 = 678836200U;
unsigned int var_4 = 279700423U;
signed char var_5 = (signed char)-64;
int var_6 = -994806533;
unsigned short var_11 = (unsigned short)60242;
int zero = 0;
short var_12 = (short)18263;
signed char var_13 = (signed char)38;
unsigned int var_14 = 1212852394U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
