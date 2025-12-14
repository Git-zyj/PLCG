#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1379303923U;
long long int var_3 = 1213327779561678217LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 14792435798118188572ULL;
unsigned long long int var_7 = 11943679416448673967ULL;
unsigned char var_9 = (unsigned char)234;
int zero = 0;
unsigned int var_10 = 771390347U;
unsigned char var_11 = (unsigned char)148;
short var_12 = (short)-7774;
int var_13 = -597267167;
unsigned char var_14 = (unsigned char)139;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
