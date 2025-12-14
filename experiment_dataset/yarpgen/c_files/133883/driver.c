#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)17;
short var_6 = (short)-4633;
short var_11 = (short)24790;
unsigned long long int var_13 = 6372360667967716403ULL;
unsigned long long int var_17 = 7089998500595302598ULL;
unsigned short var_18 = (unsigned short)47084;
int zero = 0;
unsigned short var_19 = (unsigned short)10970;
short var_20 = (short)30195;
unsigned short var_21 = (unsigned short)48868;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
