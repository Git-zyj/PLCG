#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)33213;
int var_6 = -1289242728;
int var_8 = 141729802;
short var_13 = (short)29779;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_18 = (short)-2534;
unsigned char var_19 = (unsigned char)129;
void init() {
}

void checksum() {
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
