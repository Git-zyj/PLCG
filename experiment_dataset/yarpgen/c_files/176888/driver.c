#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18290;
unsigned long long int var_1 = 6781109099654233537ULL;
unsigned short var_2 = (unsigned short)14705;
unsigned long long int var_3 = 15582423727030765436ULL;
unsigned int var_8 = 700768413U;
unsigned long long int var_10 = 5010454882320141363ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)55246;
long long int var_15 = 8761122183995197394LL;
int var_16 = -866897833;
unsigned short var_17 = (unsigned short)31826;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
