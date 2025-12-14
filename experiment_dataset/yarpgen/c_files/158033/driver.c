#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1671474785;
unsigned char var_2 = (unsigned char)32;
unsigned char var_4 = (unsigned char)107;
int zero = 0;
unsigned int var_14 = 3737494085U;
unsigned char var_15 = (unsigned char)10;
unsigned short var_16 = (unsigned short)17925;
unsigned int var_17 = 3729938562U;
long long int var_18 = -3600006234294163315LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
