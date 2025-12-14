#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7906680597820736559ULL;
long long int var_6 = -1249324233428601049LL;
unsigned char var_7 = (unsigned char)56;
unsigned short var_8 = (unsigned short)41289;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)150;
unsigned char var_12 = (unsigned char)192;
unsigned long long int var_13 = 17026658790450441069ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -4423168564950251164LL;
unsigned char var_16 = (unsigned char)147;
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
