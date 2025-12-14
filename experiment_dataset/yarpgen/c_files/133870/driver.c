#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63082;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 6513006283219497415ULL;
unsigned char var_8 = (unsigned char)118;
_Bool var_12 = (_Bool)0;
int var_14 = 2105409881;
signed char var_15 = (signed char)-65;
signed char var_16 = (signed char)-51;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)10739;
unsigned long long int var_19 = 9418397510602238692ULL;
signed char var_20 = (signed char)-13;
int var_21 = -1917486731;
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
