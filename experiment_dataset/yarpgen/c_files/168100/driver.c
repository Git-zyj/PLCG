#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-103;
unsigned short var_2 = (unsigned short)16999;
short var_6 = (short)18481;
short var_7 = (short)14336;
signed char var_8 = (signed char)85;
signed char var_10 = (signed char)63;
int zero = 0;
int var_12 = -151869935;
int var_13 = -1752006669;
int var_14 = 681493455;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
