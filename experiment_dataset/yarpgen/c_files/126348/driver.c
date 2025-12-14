#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3668;
unsigned char var_2 = (unsigned char)68;
unsigned char var_3 = (unsigned char)47;
int var_4 = -682899387;
unsigned char var_5 = (unsigned char)23;
unsigned char var_10 = (unsigned char)119;
int var_11 = -981202653;
unsigned char var_12 = (unsigned char)61;
int zero = 0;
unsigned short var_13 = (unsigned short)50461;
int var_14 = -1823613317;
unsigned short var_15 = (unsigned short)63619;
unsigned char var_16 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
