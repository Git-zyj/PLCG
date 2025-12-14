#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1161970445226469051LL;
int var_5 = -588698004;
unsigned long long int var_8 = 3936278337023841663ULL;
unsigned char var_10 = (unsigned char)105;
int var_12 = 1285519389;
int var_13 = 1237031252;
int zero = 0;
short var_14 = (short)-9743;
unsigned short var_15 = (unsigned short)45942;
int var_16 = -2142043029;
unsigned long long int var_17 = 15427298725934917769ULL;
unsigned int var_18 = 1341625261U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
