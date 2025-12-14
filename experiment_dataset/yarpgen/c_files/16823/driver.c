#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-14765;
short var_6 = (short)-20950;
unsigned short var_9 = (unsigned short)17069;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)34077;
unsigned long long int var_14 = 7683344042883732908ULL;
int zero = 0;
signed char var_15 = (signed char)8;
unsigned char var_16 = (unsigned char)57;
unsigned char var_17 = (unsigned char)152;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
