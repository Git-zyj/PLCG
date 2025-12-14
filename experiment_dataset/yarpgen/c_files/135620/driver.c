#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-100;
short var_2 = (short)-8597;
signed char var_4 = (signed char)113;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)18;
unsigned char var_10 = (unsigned char)149;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 944305369;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
