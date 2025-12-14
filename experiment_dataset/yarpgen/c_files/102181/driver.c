#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
unsigned short var_1 = (unsigned short)21145;
unsigned long long int var_2 = 1739455315690731944ULL;
short var_3 = (short)-10774;
unsigned long long int var_5 = 7697573747180308293ULL;
short var_7 = (short)1483;
short var_8 = (short)-18638;
long long int var_10 = 1418483748650295460LL;
short var_12 = (short)8820;
unsigned char var_13 = (unsigned char)2;
_Bool var_15 = (_Bool)1;
long long int var_18 = -2985525899652265906LL;
unsigned int var_19 = 3097313608U;
int zero = 0;
signed char var_20 = (signed char)-86;
long long int var_21 = 7858699528905173749LL;
unsigned long long int var_22 = 7753007953077409360ULL;
unsigned short var_23 = (unsigned short)3814;
void init() {
}

void checksum() {
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
