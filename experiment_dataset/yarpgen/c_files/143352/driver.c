#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)20;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 11309970560689634713ULL;
short var_12 = (short)-4187;
int zero = 0;
signed char var_17 = (signed char)-86;
unsigned short var_18 = (unsigned short)62244;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
