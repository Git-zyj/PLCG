#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)45251;
int var_4 = 1896413401;
signed char var_6 = (signed char)-15;
_Bool var_10 = (_Bool)1;
short var_16 = (short)-23120;
int zero = 0;
short var_19 = (short)29828;
signed char var_20 = (signed char)63;
signed char var_21 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
