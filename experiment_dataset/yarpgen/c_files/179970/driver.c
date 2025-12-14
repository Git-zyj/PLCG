#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_5 = -1776079853;
signed char var_8 = (signed char)-118;
unsigned char var_10 = (unsigned char)44;
short var_11 = (short)23244;
unsigned long long int var_12 = 5069661684199568065ULL;
long long int var_13 = 8563927961471791662LL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)41302;
long long int var_17 = -9037497484973141000LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
