#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)195;
short var_5 = (short)28132;
short var_7 = (short)-5007;
unsigned int var_8 = 115612367U;
int var_9 = -1136214032;
long long int var_10 = 1550842149895965446LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)105;
short var_17 = (short)-15693;
unsigned char var_18 = (unsigned char)114;
unsigned int var_19 = 3513560312U;
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
