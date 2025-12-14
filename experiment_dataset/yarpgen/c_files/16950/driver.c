#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1531167436;
short var_8 = (short)6286;
_Bool var_12 = (_Bool)0;
int var_13 = -1358422606;
int zero = 0;
unsigned char var_14 = (unsigned char)226;
int var_15 = 254900979;
void init() {
}

void checksum() {
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
