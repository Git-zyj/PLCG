#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3239900720U;
unsigned char var_5 = (unsigned char)178;
long long int var_10 = 1595833205911223609LL;
signed char var_11 = (signed char)100;
_Bool var_12 = (_Bool)1;
int var_13 = -1328769895;
int zero = 0;
unsigned short var_14 = (unsigned short)570;
short var_15 = (short)-13106;
unsigned char var_16 = (unsigned char)6;
unsigned int var_17 = 4279414498U;
unsigned int var_18 = 1010965425U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
