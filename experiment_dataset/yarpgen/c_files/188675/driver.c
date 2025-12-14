#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10197;
short var_3 = (short)16245;
unsigned long long int var_4 = 15956823774068709640ULL;
unsigned short var_5 = (unsigned short)64973;
_Bool var_6 = (_Bool)0;
long long int var_9 = 7238719187514403842LL;
unsigned int var_11 = 1474199318U;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)227;
unsigned long long int var_17 = 12308189388418945078ULL;
signed char var_18 = (signed char)-113;
int var_19 = -2112170501;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
