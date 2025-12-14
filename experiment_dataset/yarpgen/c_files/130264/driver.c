#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)227;
unsigned char var_8 = (unsigned char)238;
unsigned char var_12 = (unsigned char)7;
unsigned char var_14 = (unsigned char)129;
int zero = 0;
short var_16 = (short)-4390;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
int var_19 = 326574762;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
