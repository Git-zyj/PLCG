#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24727;
signed char var_4 = (signed char)-88;
short var_5 = (short)-14111;
unsigned short var_8 = (unsigned short)6504;
unsigned long long int var_11 = 13643795609198549700ULL;
int var_19 = 2065125872;
int zero = 0;
int var_20 = 2125577323;
unsigned long long int var_21 = 5668225111594445504ULL;
void init() {
}

void checksum() {
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
