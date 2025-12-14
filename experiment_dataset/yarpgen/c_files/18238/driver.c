#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1545694054;
long long int var_3 = -7656509344043585371LL;
_Bool var_4 = (_Bool)0;
int var_5 = 2142782374;
long long int var_6 = 7761748864006744407LL;
long long int var_8 = 729205301355322484LL;
unsigned long long int var_12 = 7441256268207267020ULL;
unsigned int var_15 = 2380676420U;
int zero = 0;
int var_16 = 58547679;
unsigned char var_17 = (unsigned char)26;
unsigned int var_18 = 48467370U;
short var_19 = (short)30972;
signed char var_20 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
