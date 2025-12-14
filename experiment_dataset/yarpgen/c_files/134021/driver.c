#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-55;
unsigned long long int var_1 = 14551337325077381774ULL;
long long int var_2 = -7120827849951610107LL;
unsigned short var_5 = (unsigned short)42005;
unsigned short var_6 = (unsigned short)45637;
long long int var_7 = -6406673281717760536LL;
unsigned long long int var_10 = 10638302451925122361ULL;
long long int var_14 = -134993982370877858LL;
unsigned int var_15 = 1830684526U;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_17 = (short)5578;
unsigned int var_18 = 1643325571U;
unsigned long long int var_19 = 14686979037699612390ULL;
signed char var_20 = (signed char)-16;
long long int var_21 = -8255326915704973484LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
