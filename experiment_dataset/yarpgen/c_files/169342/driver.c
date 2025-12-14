#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1267562570;
unsigned char var_4 = (unsigned char)95;
unsigned short var_5 = (unsigned short)28132;
int zero = 0;
long long int var_10 = 2537089404291174487LL;
unsigned char var_11 = (unsigned char)92;
long long int var_12 = -1345311465890765318LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
