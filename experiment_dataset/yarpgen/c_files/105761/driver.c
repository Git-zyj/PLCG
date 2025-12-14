#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3438055156U;
unsigned char var_1 = (unsigned char)138;
int var_2 = 974175763;
unsigned char var_10 = (unsigned char)1;
long long int var_12 = -3330568438595166797LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-22949;
void init() {
}

void checksum() {
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
