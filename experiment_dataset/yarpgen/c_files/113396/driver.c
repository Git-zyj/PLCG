#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)0;
signed char var_7 = (signed char)70;
short var_8 = (short)-13271;
unsigned int var_12 = 2830897317U;
unsigned long long int var_13 = 1649778754398899012ULL;
long long int var_15 = -2117741355743506280LL;
int zero = 0;
unsigned short var_17 = (unsigned short)19058;
unsigned long long int var_18 = 10116827231580089175ULL;
signed char var_19 = (signed char)-36;
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
