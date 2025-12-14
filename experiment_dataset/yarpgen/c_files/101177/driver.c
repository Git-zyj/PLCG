#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned short var_10 = (unsigned short)49557;
long long int var_14 = 2844719550043538272LL;
long long int var_16 = 1155993178991416392LL;
unsigned char var_18 = (unsigned char)220;
int zero = 0;
unsigned char var_20 = (unsigned char)162;
long long int var_21 = -5722386066794964557LL;
unsigned char var_22 = (unsigned char)107;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
