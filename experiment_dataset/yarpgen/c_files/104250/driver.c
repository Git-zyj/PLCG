#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 8814045267865005806LL;
signed char var_6 = (signed char)-34;
signed char var_7 = (signed char)-109;
unsigned char var_8 = (unsigned char)221;
long long int var_10 = 1062086490376017904LL;
unsigned char var_11 = (unsigned char)104;
int zero = 0;
unsigned char var_16 = (unsigned char)182;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
