#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 2655294366927692346LL;
unsigned long long int var_4 = 3161053668284031980ULL;
int var_5 = 1107073010;
unsigned char var_6 = (unsigned char)150;
unsigned short var_7 = (unsigned short)33798;
signed char var_8 = (signed char)-82;
unsigned char var_9 = (unsigned char)139;
int zero = 0;
unsigned int var_11 = 1987924709U;
unsigned short var_12 = (unsigned short)7642;
unsigned int var_13 = 2881907496U;
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
