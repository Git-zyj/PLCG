#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16934;
long long int var_2 = -8469175491904305344LL;
_Bool var_3 = (_Bool)0;
int var_6 = -2009344798;
unsigned short var_7 = (unsigned short)60847;
short var_9 = (short)18426;
int zero = 0;
short var_10 = (short)13635;
short var_11 = (short)28412;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)194;
int var_14 = -1221797457;
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
