#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6297124369190363804LL;
int var_1 = 51674734;
short var_3 = (short)22202;
int var_4 = 786150737;
unsigned short var_5 = (unsigned short)9933;
short var_8 = (short)12314;
int var_13 = -1651892157;
unsigned short var_14 = (unsigned short)53127;
short var_15 = (short)30644;
short var_17 = (short)-11643;
int zero = 0;
short var_18 = (short)-28154;
short var_19 = (short)-20922;
int var_20 = -701879234;
unsigned short var_21 = (unsigned short)44078;
unsigned short var_22 = (unsigned short)57135;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
