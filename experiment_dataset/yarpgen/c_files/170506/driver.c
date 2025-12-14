#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
int var_3 = -815677693;
signed char var_8 = (signed char)49;
unsigned short var_9 = (unsigned short)39674;
int var_12 = 1838472284;
unsigned short var_13 = (unsigned short)63775;
unsigned char var_14 = (unsigned char)163;
int zero = 0;
unsigned short var_15 = (unsigned short)25897;
unsigned short var_16 = (unsigned short)61253;
unsigned char var_17 = (unsigned char)232;
short var_18 = (short)16952;
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
