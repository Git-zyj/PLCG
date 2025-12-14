#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1320;
short var_2 = (short)27606;
signed char var_3 = (signed char)-75;
unsigned char var_4 = (unsigned char)231;
_Bool var_5 = (_Bool)1;
short var_10 = (short)-20493;
unsigned long long int var_12 = 4175562261224709304ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)30919;
short var_14 = (short)22721;
unsigned char var_15 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
