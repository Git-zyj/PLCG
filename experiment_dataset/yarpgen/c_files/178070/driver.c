#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -7514433269031335161LL;
_Bool var_3 = (_Bool)1;
long long int var_4 = 7112985931603393777LL;
unsigned long long int var_5 = 7650639298997016686ULL;
unsigned short var_6 = (unsigned short)16254;
unsigned short var_9 = (unsigned short)12232;
short var_10 = (short)9590;
unsigned short var_11 = (unsigned short)5307;
unsigned char var_13 = (unsigned char)255;
int zero = 0;
unsigned short var_14 = (unsigned short)4492;
unsigned char var_15 = (unsigned char)19;
unsigned long long int var_16 = 2041218857956498362ULL;
unsigned char var_17 = (unsigned char)148;
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
