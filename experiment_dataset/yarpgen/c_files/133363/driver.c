#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)108;
unsigned short var_5 = (unsigned short)58668;
unsigned short var_7 = (unsigned short)18712;
long long int var_10 = -8734523692376183576LL;
int var_16 = 1216189619;
int zero = 0;
signed char var_17 = (signed char)-33;
unsigned char var_18 = (unsigned char)233;
signed char var_19 = (signed char)-70;
unsigned char var_20 = (unsigned char)244;
void init() {
}

void checksum() {
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
