#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33324;
unsigned short var_3 = (unsigned short)38199;
unsigned char var_4 = (unsigned char)7;
long long int var_6 = 4680070094030040717LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)61712;
unsigned short var_11 = (unsigned short)40135;
unsigned int var_12 = 4130715285U;
long long int var_13 = 438329534291302310LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
