#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10593671390208958070ULL;
signed char var_7 = (signed char)7;
short var_8 = (short)2900;
short var_12 = (short)-7959;
signed char var_13 = (signed char)-114;
long long int var_15 = -823627165078993322LL;
unsigned int var_16 = 3656845620U;
int zero = 0;
signed char var_19 = (signed char)51;
int var_20 = -801014082;
unsigned char var_21 = (unsigned char)113;
void init() {
}

void checksum() {
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
