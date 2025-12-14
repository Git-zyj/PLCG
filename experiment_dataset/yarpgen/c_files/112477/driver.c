#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8728;
unsigned short var_1 = (unsigned short)7562;
int var_6 = 923498423;
unsigned short var_7 = (unsigned short)1182;
unsigned char var_9 = (unsigned char)183;
int zero = 0;
long long int var_16 = 6814061671353415352LL;
short var_17 = (short)6790;
int var_18 = -167217806;
unsigned char var_19 = (unsigned char)225;
short var_20 = (short)-30356;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
