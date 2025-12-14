#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)106;
long long int var_3 = -5648340699755411648LL;
signed char var_4 = (signed char)113;
long long int var_7 = -3714990420378708158LL;
unsigned short var_8 = (unsigned short)47891;
signed char var_10 = (signed char)-59;
int zero = 0;
short var_13 = (short)-13486;
unsigned char var_14 = (unsigned char)165;
short var_15 = (short)29894;
int var_16 = -208647389;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
