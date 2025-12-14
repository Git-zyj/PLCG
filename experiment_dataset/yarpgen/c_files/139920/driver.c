#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 362531327731587116ULL;
int var_3 = 1684149276;
unsigned long long int var_5 = 4489794031126077819ULL;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 8454615310912898053ULL;
unsigned long long int var_12 = 4775055376143896306ULL;
unsigned short var_13 = (unsigned short)60562;
int var_16 = 1150998816;
unsigned short var_17 = (unsigned short)23286;
unsigned int var_19 = 2727327000U;
int zero = 0;
unsigned int var_20 = 1269806901U;
int var_21 = 538765695;
int var_22 = 1970271792;
unsigned long long int var_23 = 950572222502212400ULL;
int var_24 = 295950211;
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
