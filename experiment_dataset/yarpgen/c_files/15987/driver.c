#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6253564370172632329ULL;
unsigned char var_2 = (unsigned char)62;
short var_3 = (short)30076;
long long int var_4 = 8561113172721789959LL;
unsigned char var_5 = (unsigned char)10;
short var_9 = (short)-9474;
unsigned int var_13 = 1883850057U;
int var_15 = -119871087;
int zero = 0;
unsigned char var_19 = (unsigned char)160;
short var_20 = (short)-6150;
unsigned long long int var_21 = 5853140273087560554ULL;
unsigned char var_22 = (unsigned char)194;
unsigned int var_23 = 970850497U;
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
