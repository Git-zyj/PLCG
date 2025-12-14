#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1526562321;
unsigned char var_10 = (unsigned char)185;
int var_12 = 861490079;
short var_15 = (short)30177;
unsigned int var_16 = 1489552587U;
int zero = 0;
unsigned char var_18 = (unsigned char)234;
int var_19 = -1250946464;
unsigned int var_20 = 194400449U;
unsigned char var_21 = (unsigned char)114;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
