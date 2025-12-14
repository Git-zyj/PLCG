#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 6312597693719014149LL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-18484;
int var_7 = 1211515910;
unsigned char var_8 = (unsigned char)49;
long long int var_10 = -986770298594251383LL;
signed char var_11 = (signed char)-64;
unsigned long long int var_12 = 8030014762514085795ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)83;
_Bool var_15 = (_Bool)0;
long long int var_16 = 2477447899123711982LL;
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
