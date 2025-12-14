#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9025026516472103285LL;
unsigned char var_5 = (unsigned char)72;
unsigned short var_11 = (unsigned short)2257;
int zero = 0;
unsigned short var_15 = (unsigned short)36403;
unsigned int var_16 = 1227885853U;
long long int var_17 = -4427429786288596073LL;
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
