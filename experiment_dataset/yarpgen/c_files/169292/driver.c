#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3947574204U;
int var_5 = -259466553;
signed char var_6 = (signed char)20;
unsigned short var_7 = (unsigned short)20724;
unsigned short var_8 = (unsigned short)56728;
unsigned int var_9 = 3704186856U;
unsigned long long int var_13 = 3084526635172579923ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)232;
unsigned long long int var_16 = 9353924401739014314ULL;
int var_17 = -1409425728;
int var_18 = -186230896;
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
