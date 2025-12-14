#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)97;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)21453;
short var_8 = (short)-15246;
long long int var_10 = -3866627044700312746LL;
int var_11 = -1043993990;
int zero = 0;
unsigned short var_14 = (unsigned short)11032;
unsigned long long int var_15 = 3770502828141324021ULL;
short var_16 = (short)19037;
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
