#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)100;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-27744;
short var_7 = (short)5127;
unsigned short var_8 = (unsigned short)46232;
unsigned short var_9 = (unsigned short)37225;
int zero = 0;
short var_11 = (short)15085;
unsigned int var_12 = 1693837556U;
unsigned int var_13 = 123914751U;
void init() {
}

void checksum() {
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
