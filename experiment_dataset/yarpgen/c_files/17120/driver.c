#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)87;
short var_2 = (short)-22971;
_Bool var_6 = (_Bool)1;
int var_7 = 2066423681;
unsigned char var_10 = (unsigned char)80;
unsigned long long int var_13 = 15985656988098635029ULL;
int zero = 0;
int var_19 = 1611523470;
unsigned short var_20 = (unsigned short)22132;
unsigned char var_21 = (unsigned char)94;
int var_22 = 59978399;
int var_23 = -491643284;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
