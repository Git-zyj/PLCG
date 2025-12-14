#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-11597;
int var_5 = 533520037;
unsigned long long int var_7 = 3779784861635412493ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 12520142584514206678ULL;
short var_18 = (short)-20822;
unsigned char var_19 = (unsigned char)69;
long long int var_20 = -7746925738637457630LL;
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
