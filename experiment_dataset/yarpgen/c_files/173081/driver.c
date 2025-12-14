#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32142;
unsigned short var_2 = (unsigned short)59769;
int var_4 = 410352034;
unsigned int var_6 = 3731167717U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 6286954181364847421ULL;
unsigned int var_9 = 1255067388U;
unsigned short var_10 = (unsigned short)1519;
long long int var_11 = 4460043142518248924LL;
int zero = 0;
unsigned char var_12 = (unsigned char)15;
unsigned char var_13 = (unsigned char)12;
unsigned int var_14 = 2684941493U;
unsigned long long int var_15 = 18074913644961863296ULL;
unsigned short var_16 = (unsigned short)38576;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
