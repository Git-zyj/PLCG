#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2081755325;
unsigned short var_2 = (unsigned short)19610;
_Bool var_4 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)221;
unsigned char var_15 = (unsigned char)105;
int var_16 = 526699559;
int var_17 = 2019930360;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
