#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45551;
short var_1 = (short)-24791;
signed char var_3 = (signed char)-61;
short var_4 = (short)941;
short var_6 = (short)-25942;
signed char var_9 = (signed char)-8;
short var_10 = (short)17758;
unsigned char var_11 = (unsigned char)102;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-22241;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 4194169659490942365ULL;
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
