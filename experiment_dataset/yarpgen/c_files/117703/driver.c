#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)152;
unsigned short var_8 = (unsigned short)21196;
unsigned short var_13 = (unsigned short)20132;
short var_16 = (short)12623;
unsigned int var_17 = 2664017727U;
signed char var_18 = (signed char)-123;
int zero = 0;
unsigned short var_19 = (unsigned short)12009;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)3;
long long int var_22 = 7809864812641847628LL;
_Bool var_23 = (_Bool)1;
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
