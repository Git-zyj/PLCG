#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2997871063288357348LL;
unsigned short var_2 = (unsigned short)13517;
long long int var_4 = -8839337412661772778LL;
unsigned int var_5 = 3799415318U;
int var_10 = 1738963087;
unsigned int var_11 = 860032732U;
int zero = 0;
unsigned int var_12 = 3996463648U;
_Bool var_13 = (_Bool)0;
long long int var_14 = -6893544827912820684LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
