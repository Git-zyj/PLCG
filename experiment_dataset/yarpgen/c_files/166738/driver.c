#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 706568989102812486ULL;
unsigned char var_10 = (unsigned char)26;
unsigned int var_18 = 3293295647U;
int zero = 0;
short var_20 = (short)3650;
short var_21 = (short)-31476;
signed char var_22 = (signed char)-36;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
