#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_10 = 1821911495504640872ULL;
unsigned char var_11 = (unsigned char)131;
unsigned int var_17 = 3049256353U;
int zero = 0;
int var_19 = -401173941;
unsigned char var_20 = (unsigned char)29;
unsigned long long int var_21 = 5881797205134519125ULL;
long long int var_22 = 193566501154415615LL;
unsigned short var_23 = (unsigned short)8222;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
