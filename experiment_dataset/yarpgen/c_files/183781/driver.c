#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22849;
unsigned short var_2 = (unsigned short)65163;
signed char var_5 = (signed char)-107;
unsigned short var_8 = (unsigned short)46285;
unsigned long long int var_12 = 13668513430914862349ULL;
short var_14 = (short)-28790;
unsigned long long int var_17 = 17035237218388909587ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)17483;
unsigned short var_20 = (unsigned short)29944;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
