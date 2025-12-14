#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8616156778660972957LL;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)45181;
unsigned short var_3 = (unsigned short)30837;
int var_4 = -1864048041;
signed char var_5 = (signed char)41;
long long int var_6 = -2674385582272884724LL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-82;
unsigned char var_10 = (unsigned char)214;
unsigned int var_15 = 4270037289U;
signed char var_16 = (signed char)127;
short var_17 = (short)5129;
long long int var_19 = 6928705201424670424LL;
int zero = 0;
unsigned short var_20 = (unsigned short)13560;
long long int var_21 = 2135863081200721402LL;
_Bool var_22 = (_Bool)0;
int var_23 = 826899633;
unsigned int var_24 = 3700196977U;
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
