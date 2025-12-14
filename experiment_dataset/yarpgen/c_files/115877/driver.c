#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4891810922338071095LL;
short var_7 = (short)19735;
int var_8 = 2075699162;
signed char var_9 = (signed char)-36;
int zero = 0;
short var_11 = (short)15453;
int var_12 = 533409325;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
