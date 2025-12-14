#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)97;
signed char var_4 = (signed char)-126;
unsigned char var_6 = (unsigned char)198;
unsigned int var_8 = 3540497741U;
signed char var_9 = (signed char)23;
signed char var_10 = (signed char)29;
unsigned short var_11 = (unsigned short)64265;
unsigned long long int var_13 = 1500771059511145402ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)154;
unsigned long long int var_16 = 4173320950840140157ULL;
unsigned short var_17 = (unsigned short)16530;
unsigned long long int var_18 = 9896358821110415156ULL;
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
