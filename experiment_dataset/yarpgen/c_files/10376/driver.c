#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8464;
unsigned char var_3 = (unsigned char)33;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)38195;
int var_6 = 2038779936;
int var_7 = -1955560438;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)35;
int zero = 0;
unsigned short var_10 = (unsigned short)24535;
unsigned char var_11 = (unsigned char)150;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
