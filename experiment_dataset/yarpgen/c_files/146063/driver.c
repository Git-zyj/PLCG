#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)92;
unsigned int var_3 = 211818402U;
int var_4 = -1597490907;
long long int var_7 = 631907593036076043LL;
unsigned char var_9 = (unsigned char)70;
int zero = 0;
unsigned long long int var_12 = 1786462136690162543ULL;
short var_13 = (short)17766;
unsigned char var_14 = (unsigned char)76;
unsigned char var_15 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
