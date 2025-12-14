#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15390;
short var_2 = (short)-21830;
int var_3 = -266983660;
unsigned long long int var_4 = 15008039993782089984ULL;
_Bool var_6 = (_Bool)0;
int var_8 = -1697333547;
int zero = 0;
unsigned char var_10 = (unsigned char)220;
unsigned short var_11 = (unsigned short)28921;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
