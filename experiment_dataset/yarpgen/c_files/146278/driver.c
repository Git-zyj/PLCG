#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63372;
unsigned long long int var_2 = 5387299997411380124ULL;
int var_3 = -400705320;
unsigned char var_4 = (unsigned char)180;
short var_6 = (short)-28535;
long long int var_7 = -7631740326323053922LL;
unsigned int var_9 = 950733727U;
unsigned long long int var_11 = 13389996542286511748ULL;
unsigned char var_12 = (unsigned char)200;
long long int var_13 = -5786625211741212567LL;
int zero = 0;
int var_14 = 438236294;
long long int var_15 = -689220297469286100LL;
int var_16 = -476489221;
short var_17 = (short)-28484;
short var_18 = (short)3774;
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
