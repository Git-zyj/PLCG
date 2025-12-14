#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = 1166114532;
short var_3 = (short)-21618;
unsigned short var_4 = (unsigned short)38488;
unsigned char var_6 = (unsigned char)152;
short var_9 = (short)28876;
unsigned short var_10 = (unsigned short)12621;
int zero = 0;
int var_11 = -1261814958;
short var_12 = (short)31977;
unsigned long long int var_13 = 4647256841226504071ULL;
short var_14 = (short)1423;
void init() {
}

void checksum() {
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
