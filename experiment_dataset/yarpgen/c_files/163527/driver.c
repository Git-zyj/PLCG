#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)52921;
short var_4 = (short)248;
_Bool var_6 = (_Bool)1;
short var_8 = (short)17180;
unsigned char var_10 = (unsigned char)78;
int zero = 0;
short var_11 = (short)-10310;
unsigned char var_12 = (unsigned char)251;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1615717659U;
unsigned short var_15 = (unsigned short)7037;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
