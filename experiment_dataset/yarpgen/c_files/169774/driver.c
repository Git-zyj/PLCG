#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6062824065688732584LL;
_Bool var_4 = (_Bool)1;
long long int var_5 = 3012455357598723957LL;
unsigned short var_6 = (unsigned short)48720;
unsigned char var_7 = (unsigned char)111;
int var_8 = -695069147;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 8850291457701949039ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
