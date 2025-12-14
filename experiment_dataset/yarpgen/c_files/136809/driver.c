#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)6;
int var_4 = -1817294801;
int var_5 = 1888966156;
unsigned long long int var_7 = 9531366827947736894ULL;
_Bool var_9 = (_Bool)0;
long long int var_13 = 7118389085023924183LL;
unsigned short var_16 = (unsigned short)11642;
unsigned long long int var_17 = 5134683091704789077ULL;
int zero = 0;
short var_20 = (short)4928;
unsigned int var_21 = 3201051543U;
unsigned char var_22 = (unsigned char)158;
unsigned char var_23 = (unsigned char)171;
short var_24 = (short)6840;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
