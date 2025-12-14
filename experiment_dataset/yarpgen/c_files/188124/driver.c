#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25122;
signed char var_3 = (signed char)34;
unsigned short var_4 = (unsigned short)8382;
unsigned short var_5 = (unsigned short)191;
unsigned short var_6 = (unsigned short)29861;
signed char var_7 = (signed char)-91;
int zero = 0;
signed char var_10 = (signed char)100;
unsigned short var_11 = (unsigned short)52249;
unsigned short var_12 = (unsigned short)45174;
signed char var_13 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
