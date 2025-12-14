#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1920612733;
short var_5 = (short)-14859;
unsigned short var_10 = (unsigned short)2191;
unsigned short var_11 = (unsigned short)8785;
unsigned char var_12 = (unsigned char)60;
unsigned long long int var_13 = 9029837211770346650ULL;
unsigned long long int var_16 = 8915247335365036534ULL;
int zero = 0;
long long int var_17 = -7131749993787982615LL;
short var_18 = (short)-21576;
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
