#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42832;
unsigned char var_1 = (unsigned char)194;
unsigned char var_2 = (unsigned char)70;
unsigned long long int var_3 = 6246956181595657622ULL;
unsigned long long int var_9 = 2163248333041796003ULL;
short var_12 = (short)30396;
int var_13 = 1438819243;
unsigned int var_16 = 3050021455U;
long long int var_17 = -4843917246567917163LL;
int zero = 0;
signed char var_19 = (signed char)-117;
int var_20 = 1779457019;
unsigned int var_21 = 1415589734U;
unsigned long long int var_22 = 4564942133762627300ULL;
unsigned char var_23 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
