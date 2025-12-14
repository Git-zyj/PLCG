#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4773113525075286448LL;
unsigned long long int var_4 = 7899489824179679443ULL;
signed char var_5 = (signed char)-16;
unsigned short var_6 = (unsigned short)47955;
long long int var_7 = 1217651088360221592LL;
unsigned long long int var_8 = 6627717216300392781ULL;
signed char var_9 = (signed char)58;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = 2073203779;
_Bool var_12 = (_Bool)0;
short var_13 = (short)8345;
int var_14 = 90134102;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)70;
unsigned int var_18 = 1083383584U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
