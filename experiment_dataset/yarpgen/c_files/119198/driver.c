#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)7726;
unsigned long long int var_8 = 4244515081756277659ULL;
int zero = 0;
signed char var_10 = (signed char)76;
unsigned short var_11 = (unsigned short)47008;
short var_12 = (short)-27464;
long long int var_13 = 4233790435947121959LL;
unsigned char var_14 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
