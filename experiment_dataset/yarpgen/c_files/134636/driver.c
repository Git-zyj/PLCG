#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)159;
int var_4 = -994806122;
int var_7 = -134715500;
short var_10 = (short)-22904;
int zero = 0;
int var_12 = -478393423;
unsigned int var_13 = 563972550U;
unsigned long long int var_14 = 4320175378128353108ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
