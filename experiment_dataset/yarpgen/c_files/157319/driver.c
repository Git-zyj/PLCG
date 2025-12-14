#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
short var_1 = (short)4182;
unsigned char var_3 = (unsigned char)81;
unsigned long long int var_4 = 10207753396200759918ULL;
unsigned short var_5 = (unsigned short)6365;
int var_6 = -376316046;
long long int var_8 = -6443659993109178162LL;
signed char var_11 = (signed char)29;
unsigned char var_12 = (unsigned char)144;
int zero = 0;
long long int var_15 = -1569804802958159998LL;
unsigned char var_16 = (unsigned char)38;
int var_17 = -521272277;
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
