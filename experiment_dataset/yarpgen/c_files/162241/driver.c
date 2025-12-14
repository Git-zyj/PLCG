#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60421;
short var_5 = (short)-5390;
unsigned int var_11 = 3972070770U;
int zero = 0;
unsigned short var_12 = (unsigned short)2727;
int var_13 = 1423450157;
long long int var_14 = 6303944887795515760LL;
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
