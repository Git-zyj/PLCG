#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2992715074788161602ULL;
unsigned char var_2 = (unsigned char)232;
unsigned int var_3 = 2259140288U;
short var_4 = (short)5204;
short var_5 = (short)-18446;
int var_7 = -1164117692;
int var_8 = -1537538358;
int zero = 0;
short var_11 = (short)-31689;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)60679;
short var_14 = (short)-1166;
unsigned short var_15 = (unsigned short)48363;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
