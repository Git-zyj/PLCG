#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37574;
int var_7 = 1857521286;
unsigned short var_8 = (unsigned short)62901;
short var_10 = (short)-5682;
int zero = 0;
short var_12 = (short)22432;
unsigned short var_13 = (unsigned short)47345;
short var_14 = (short)19130;
void init() {
}

void checksum() {
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
