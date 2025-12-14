#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-59;
int var_5 = -1841792184;
short var_6 = (short)-29674;
unsigned int var_7 = 3520054962U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 128637712U;
int var_10 = -1654646356;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)43020;
unsigned char var_13 = (unsigned char)241;
unsigned short var_14 = (unsigned short)56307;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
