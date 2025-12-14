#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -483214969305702934LL;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)94;
unsigned short var_13 = (unsigned short)55593;
int zero = 0;
int var_19 = -1692513713;
unsigned int var_20 = 2146538289U;
void init() {
}

void checksum() {
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
