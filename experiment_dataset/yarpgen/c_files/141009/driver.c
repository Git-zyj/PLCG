#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54017;
unsigned long long int var_4 = 15157761717089166679ULL;
unsigned short var_7 = (unsigned short)62388;
unsigned char var_14 = (unsigned char)49;
short var_15 = (short)-17294;
int zero = 0;
unsigned char var_17 = (unsigned char)248;
unsigned int var_18 = 172393538U;
unsigned int var_19 = 1405209895U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
