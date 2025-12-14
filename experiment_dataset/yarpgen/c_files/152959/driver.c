#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)56487;
int var_6 = 1650499077;
signed char var_9 = (signed char)-113;
unsigned char var_11 = (unsigned char)71;
signed char var_12 = (signed char)37;
short var_13 = (short)31580;
int zero = 0;
unsigned char var_18 = (unsigned char)113;
unsigned char var_19 = (unsigned char)200;
short var_20 = (short)-23724;
void init() {
}

void checksum() {
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
