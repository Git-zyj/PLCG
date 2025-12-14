#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)230;
_Bool var_1 = (_Bool)0;
int var_2 = -1170538207;
int var_5 = -1587877378;
int var_6 = -1374151270;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)55770;
long long int var_11 = -4911874008564643108LL;
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
