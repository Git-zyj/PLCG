#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30859;
short var_4 = (short)-19281;
unsigned short var_7 = (unsigned short)33272;
unsigned short var_8 = (unsigned short)9288;
unsigned char var_9 = (unsigned char)146;
long long int var_10 = -3960824229460875168LL;
short var_13 = (short)-31214;
int var_15 = 624716090;
int zero = 0;
unsigned short var_18 = (unsigned short)5144;
unsigned short var_19 = (unsigned short)798;
unsigned int var_20 = 922495206U;
unsigned int var_21 = 3440980928U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
