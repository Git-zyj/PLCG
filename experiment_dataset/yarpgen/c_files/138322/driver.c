#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28942;
unsigned short var_4 = (unsigned short)12950;
unsigned long long int var_5 = 15417544939832475367ULL;
short var_6 = (short)-15808;
_Bool var_8 = (_Bool)0;
short var_11 = (short)-31510;
int var_13 = -992720499;
long long int var_16 = 3386055585500539948LL;
int zero = 0;
unsigned short var_19 = (unsigned short)22225;
short var_20 = (short)-15421;
unsigned int var_21 = 568356930U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
