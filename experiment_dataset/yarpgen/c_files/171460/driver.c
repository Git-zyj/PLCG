#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17077;
short var_2 = (short)28616;
int var_3 = -1006683193;
short var_4 = (short)11205;
unsigned int var_7 = 2998065015U;
unsigned int var_10 = 1218999284U;
int zero = 0;
short var_11 = (short)27952;
unsigned short var_12 = (unsigned short)31548;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
