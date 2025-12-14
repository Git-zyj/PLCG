#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31466;
unsigned short var_1 = (unsigned short)54906;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3006909101U;
unsigned long long int var_6 = 12154065430741660371ULL;
long long int var_8 = -148643065474610510LL;
unsigned long long int var_10 = 2629246398738522898ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)7460;
void init() {
}

void checksum() {
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
