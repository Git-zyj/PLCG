#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2811788377462050809ULL;
long long int var_3 = 7249789602864649391LL;
int var_4 = 1055910060;
unsigned short var_7 = (unsigned short)7673;
unsigned char var_10 = (unsigned char)199;
int zero = 0;
signed char var_14 = (signed char)-9;
long long int var_15 = -272914194261477127LL;
unsigned char var_16 = (unsigned char)249;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
