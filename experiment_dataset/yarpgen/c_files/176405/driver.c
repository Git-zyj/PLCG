#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
int var_6 = 911561033;
unsigned short var_8 = (unsigned short)11658;
_Bool var_11 = (_Bool)0;
long long int var_14 = 7351697882290074917LL;
int zero = 0;
long long int var_15 = -1897692094861932290LL;
unsigned int var_16 = 1463116106U;
unsigned long long int var_17 = 5266005873615477459ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
