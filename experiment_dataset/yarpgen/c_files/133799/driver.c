#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30617;
short var_3 = (short)10115;
unsigned short var_6 = (unsigned short)19006;
unsigned short var_8 = (unsigned short)61198;
unsigned short var_16 = (unsigned short)39619;
int zero = 0;
unsigned char var_18 = (unsigned char)221;
short var_19 = (short)11143;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
