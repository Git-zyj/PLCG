#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)5806;
long long int var_4 = -2785080338447506605LL;
unsigned char var_5 = (unsigned char)229;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)52196;
long long int var_10 = 7085091721611290161LL;
unsigned short var_12 = (unsigned short)59112;
long long int var_13 = 1060174745917855877LL;
int zero = 0;
unsigned long long int var_14 = 9194024481248647527ULL;
unsigned short var_15 = (unsigned short)35794;
unsigned int var_16 = 3600488560U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
