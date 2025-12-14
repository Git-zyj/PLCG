#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13286525808874274518ULL;
unsigned long long int var_2 = 6549660241734643232ULL;
long long int var_3 = 8062967538193906713LL;
unsigned int var_4 = 2674087135U;
unsigned int var_9 = 3886848401U;
unsigned long long int var_10 = 567574193148386351ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 8454395610505384717ULL;
unsigned short var_14 = (unsigned short)55267;
int zero = 0;
int var_16 = 56927830;
unsigned char var_17 = (unsigned char)11;
unsigned char var_18 = (unsigned char)4;
unsigned int var_19 = 4238342611U;
unsigned int var_20 = 255667597U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
