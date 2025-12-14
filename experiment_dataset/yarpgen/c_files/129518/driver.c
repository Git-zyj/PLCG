#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)3595;
unsigned char var_6 = (unsigned char)150;
unsigned char var_8 = (unsigned char)239;
_Bool var_14 = (_Bool)1;
signed char var_16 = (signed char)40;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)31560;
short var_19 = (short)27121;
void init() {
}

void checksum() {
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
