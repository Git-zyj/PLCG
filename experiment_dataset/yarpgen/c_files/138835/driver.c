#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3326;
unsigned short var_5 = (unsigned short)54474;
unsigned short var_6 = (unsigned short)24408;
unsigned int var_7 = 2887209149U;
unsigned char var_8 = (unsigned char)35;
unsigned char var_10 = (unsigned char)232;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)101;
int zero = 0;
short var_14 = (short)31541;
unsigned char var_15 = (unsigned char)86;
int var_16 = -1269595054;
long long int var_17 = 8288452772766780200LL;
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
