#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)212;
short var_4 = (short)29650;
unsigned short var_5 = (unsigned short)12974;
unsigned char var_6 = (unsigned char)37;
int var_8 = -935109795;
signed char var_11 = (signed char)-101;
unsigned short var_14 = (unsigned short)10308;
int zero = 0;
unsigned char var_15 = (unsigned char)245;
long long int var_16 = -7072878393561638523LL;
signed char var_17 = (signed char)-124;
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
