#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3749075542U;
long long int var_3 = 8056439477034307122LL;
unsigned long long int var_4 = 16893272702087307718ULL;
unsigned int var_6 = 1935004667U;
unsigned short var_7 = (unsigned short)43811;
unsigned char var_8 = (unsigned char)169;
short var_9 = (short)18983;
unsigned short var_10 = (unsigned short)10529;
long long int var_11 = -4183574206496175402LL;
int zero = 0;
unsigned char var_12 = (unsigned char)35;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
