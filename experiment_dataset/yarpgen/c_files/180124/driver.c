#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -743799787;
long long int var_4 = 8586807156576282512LL;
unsigned short var_7 = (unsigned short)25812;
unsigned char var_8 = (unsigned char)64;
unsigned int var_11 = 2197936579U;
int var_12 = 2131384853;
int var_13 = 1729222414;
int zero = 0;
unsigned char var_14 = (unsigned char)217;
unsigned char var_15 = (unsigned char)163;
long long int var_16 = -6506264591835624241LL;
long long int var_17 = -7897269774078426115LL;
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
