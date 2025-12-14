#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16365;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)190;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)255;
_Bool var_11 = (_Bool)1;
unsigned char var_14 = (unsigned char)192;
int zero = 0;
short var_15 = (short)-25326;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
