#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22622;
_Bool var_8 = (_Bool)0;
long long int var_10 = 4390484721133418727LL;
long long int var_14 = -825186395890028292LL;
unsigned int var_17 = 1775023108U;
unsigned long long int var_19 = 4489300155079374954ULL;
int zero = 0;
unsigned int var_20 = 3810203933U;
signed char var_21 = (signed char)78;
void init() {
}

void checksum() {
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
