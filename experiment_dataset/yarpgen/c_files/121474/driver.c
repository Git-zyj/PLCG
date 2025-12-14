#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3741747964603399672ULL;
unsigned int var_2 = 3612303487U;
short var_3 = (short)15586;
short var_4 = (short)-12832;
long long int var_5 = -6330194334147003942LL;
long long int var_7 = -3719792372451113787LL;
unsigned int var_8 = 2687211256U;
unsigned short var_9 = (unsigned short)43953;
unsigned char var_11 = (unsigned char)100;
int zero = 0;
unsigned char var_12 = (unsigned char)122;
unsigned int var_13 = 1630404257U;
unsigned long long int var_14 = 2906018209150109335ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
