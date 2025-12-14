#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)195;
int var_9 = 1212388601;
unsigned short var_10 = (unsigned short)63112;
unsigned int var_15 = 4074458052U;
int zero = 0;
long long int var_16 = 3289545902904340768LL;
unsigned char var_17 = (unsigned char)2;
short var_18 = (short)-12661;
signed char var_19 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
