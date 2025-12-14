#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19393;
unsigned short var_5 = (unsigned short)45488;
int var_7 = -715520868;
long long int var_9 = -5565426373988205878LL;
unsigned short var_12 = (unsigned short)32653;
int zero = 0;
int var_13 = -730907912;
unsigned int var_14 = 4048247143U;
unsigned long long int var_15 = 4445259805436677933ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
