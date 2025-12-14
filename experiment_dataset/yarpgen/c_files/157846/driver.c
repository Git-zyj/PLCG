#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5945677024762008004LL;
unsigned char var_4 = (unsigned char)37;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 557957606U;
signed char var_15 = (signed char)-36;
int zero = 0;
signed char var_16 = (signed char)41;
unsigned long long int var_17 = 11789889602908257607ULL;
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
