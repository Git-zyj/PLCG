#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39365;
unsigned char var_2 = (unsigned char)19;
unsigned long long int var_3 = 12491957150615644963ULL;
unsigned long long int var_4 = 14391044969052716512ULL;
int var_7 = 2087895674;
unsigned long long int var_8 = 2642523025056725574ULL;
unsigned int var_9 = 2602611384U;
short var_10 = (short)-30771;
int var_11 = -1183350168;
short var_12 = (short)-8148;
unsigned short var_14 = (unsigned short)29527;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)33;
unsigned long long int var_17 = 6147558780417638339ULL;
unsigned short var_18 = (unsigned short)38926;
short var_19 = (short)-28325;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
