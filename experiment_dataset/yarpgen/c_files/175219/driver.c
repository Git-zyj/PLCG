#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)215;
unsigned char var_7 = (unsigned char)138;
signed char var_9 = (signed char)-9;
unsigned short var_10 = (unsigned short)61722;
unsigned char var_13 = (unsigned char)35;
unsigned long long int var_16 = 7679263765743535152ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)10919;
unsigned short var_18 = (unsigned short)61657;
unsigned int var_19 = 2793864404U;
short var_20 = (short)-16865;
void init() {
}

void checksum() {
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
