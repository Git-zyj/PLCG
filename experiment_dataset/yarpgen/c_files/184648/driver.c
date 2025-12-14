#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7694154279816154678LL;
int var_4 = 1415746076;
long long int var_5 = -8408206049022278051LL;
unsigned char var_6 = (unsigned char)89;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 16350114674511522408ULL;
unsigned long long int var_13 = 17741630166022466071ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -8617246651495264698LL;
unsigned int var_18 = 1092974140U;
unsigned char var_19 = (unsigned char)199;
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
