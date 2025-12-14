#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)135;
unsigned char var_7 = (unsigned char)237;
long long int var_8 = 965005894153093023LL;
int var_12 = 604680016;
unsigned short var_13 = (unsigned short)9000;
long long int var_14 = 6586161133188556383LL;
unsigned long long int var_15 = 4893125587359353614ULL;
int zero = 0;
int var_16 = 1556322253;
int var_17 = 633351558;
long long int var_18 = -5902812071238349838LL;
void init() {
}

void checksum() {
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
