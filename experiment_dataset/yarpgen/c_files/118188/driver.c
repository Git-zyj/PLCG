#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)41274;
unsigned short var_6 = (unsigned short)65439;
signed char var_12 = (signed char)-24;
int zero = 0;
int var_15 = -1719139966;
int var_16 = 1841890711;
short var_17 = (short)12871;
signed char var_18 = (signed char)-92;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
