#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)124;
unsigned int var_11 = 3028117664U;
long long int var_12 = -3035123716144896212LL;
unsigned char var_16 = (unsigned char)182;
int zero = 0;
unsigned char var_17 = (unsigned char)136;
int var_18 = 1592617879;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
