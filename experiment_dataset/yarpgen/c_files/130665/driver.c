#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)11788;
unsigned char var_3 = (unsigned char)153;
_Bool var_4 = (_Bool)0;
short var_8 = (short)-7423;
short var_14 = (short)13907;
int zero = 0;
short var_15 = (short)-5797;
unsigned long long int var_16 = 12631746507212800624ULL;
short var_17 = (short)-6010;
unsigned long long int var_18 = 8632839244286968311ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
