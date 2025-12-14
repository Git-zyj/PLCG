#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -364688982;
unsigned char var_1 = (unsigned char)1;
long long int var_6 = -5000997379340500219LL;
short var_7 = (short)29174;
unsigned char var_8 = (unsigned char)21;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)185;
unsigned char var_18 = (unsigned char)101;
int var_19 = 659355159;
long long int var_20 = -3082481652917035158LL;
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
