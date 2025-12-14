#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46505;
short var_3 = (short)-6223;
short var_5 = (short)-7535;
signed char var_8 = (signed char)-73;
long long int var_11 = -1276261746199976952LL;
unsigned short var_12 = (unsigned short)49799;
unsigned char var_13 = (unsigned char)252;
long long int var_16 = -3511455986742745418LL;
int zero = 0;
unsigned int var_17 = 1520909621U;
unsigned char var_18 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
