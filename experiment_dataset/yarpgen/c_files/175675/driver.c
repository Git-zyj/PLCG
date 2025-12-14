#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11544905398633646313ULL;
unsigned char var_4 = (unsigned char)155;
short var_7 = (short)25334;
short var_12 = (short)-22969;
short var_14 = (short)-19565;
unsigned char var_16 = (unsigned char)48;
int zero = 0;
short var_20 = (short)6079;
_Bool var_21 = (_Bool)0;
long long int var_22 = 664496746278807876LL;
long long int var_23 = -6582085114685748564LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
