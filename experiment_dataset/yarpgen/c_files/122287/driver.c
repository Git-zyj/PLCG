#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)123;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned short var_16 = (unsigned short)65061;
int zero = 0;
unsigned short var_20 = (unsigned short)33516;
unsigned int var_21 = 4021379791U;
unsigned long long int var_22 = 11567831300466082935ULL;
short var_23 = (short)-24350;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
