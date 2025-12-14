#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -1614030453;
unsigned short var_2 = (unsigned short)8805;
long long int var_3 = -1645010697708348998LL;
int var_6 = 1376448488;
signed char var_7 = (signed char)-35;
int zero = 0;
long long int var_10 = -2338876103401144077LL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)232;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
