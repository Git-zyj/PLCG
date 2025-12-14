#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7690;
unsigned char var_1 = (unsigned char)56;
short var_3 = (short)26533;
short var_6 = (short)-23277;
signed char var_7 = (signed char)48;
_Bool var_8 = (_Bool)0;
long long int var_9 = -8819882754608503430LL;
int var_10 = 77878453;
int zero = 0;
long long int var_11 = -8931400360364417361LL;
long long int var_12 = 8118530150236921445LL;
unsigned long long int var_13 = 121134301083672957ULL;
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
