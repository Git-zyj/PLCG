#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6972526426947474950LL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 15770022848816520927ULL;
unsigned long long int var_7 = 11426054947796800229ULL;
unsigned short var_9 = (unsigned short)53396;
int var_10 = 1660231760;
int var_11 = -1624891199;
unsigned int var_15 = 3580292792U;
int zero = 0;
unsigned int var_17 = 2562905403U;
long long int var_18 = 3796101724480818059LL;
unsigned long long int var_19 = 12680820381225658449ULL;
unsigned int var_20 = 2775666631U;
void init() {
}

void checksum() {
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
