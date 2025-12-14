#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15971;
short var_2 = (short)-465;
short var_3 = (short)24511;
unsigned short var_4 = (unsigned short)47429;
short var_5 = (short)25104;
short var_6 = (short)3533;
unsigned short var_8 = (unsigned short)5196;
short var_10 = (short)-25575;
short var_11 = (short)8839;
int zero = 0;
short var_12 = (short)-16653;
unsigned short var_13 = (unsigned short)34598;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
