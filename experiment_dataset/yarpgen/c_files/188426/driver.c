#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
short var_1 = (short)-11277;
short var_5 = (short)-7402;
unsigned short var_8 = (unsigned short)28949;
unsigned short var_11 = (unsigned short)38692;
signed char var_12 = (signed char)120;
signed char var_14 = (signed char)25;
int zero = 0;
signed char var_15 = (signed char)-77;
unsigned short var_16 = (unsigned short)28610;
short var_17 = (short)-16441;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
