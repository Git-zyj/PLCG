#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2624;
long long int var_2 = -490342999997649833LL;
unsigned short var_10 = (unsigned short)15433;
unsigned short var_11 = (unsigned short)22030;
unsigned int var_14 = 1986689803U;
int var_16 = -119193343;
int zero = 0;
unsigned char var_17 = (unsigned char)112;
short var_18 = (short)-12722;
unsigned int var_19 = 3913929743U;
unsigned short var_20 = (unsigned short)10658;
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
