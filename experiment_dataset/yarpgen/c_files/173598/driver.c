#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1522501948777613451LL;
unsigned short var_5 = (unsigned short)54911;
int var_6 = 1198224787;
int var_7 = 806008689;
unsigned char var_11 = (unsigned char)239;
unsigned char var_12 = (unsigned char)210;
short var_18 = (short)11095;
int zero = 0;
short var_19 = (short)-20033;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
