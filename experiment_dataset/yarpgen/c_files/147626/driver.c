#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8865;
unsigned short var_3 = (unsigned short)30800;
unsigned char var_5 = (unsigned char)225;
int zero = 0;
int var_11 = -125708751;
short var_12 = (short)-15721;
short var_13 = (short)26470;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
