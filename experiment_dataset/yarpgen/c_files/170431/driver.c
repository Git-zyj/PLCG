#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64218;
unsigned short var_1 = (unsigned short)21451;
short var_3 = (short)525;
unsigned short var_4 = (unsigned short)25978;
unsigned short var_7 = (unsigned short)23181;
unsigned short var_8 = (unsigned short)61764;
int zero = 0;
int var_11 = 1683429026;
unsigned short var_12 = (unsigned short)35061;
unsigned short var_13 = (unsigned short)24013;
unsigned short var_14 = (unsigned short)1758;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
