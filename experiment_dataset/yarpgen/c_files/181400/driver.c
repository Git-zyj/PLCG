#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_5 = 6116849870392222526LL;
long long int var_7 = -4271762212310029703LL;
unsigned short var_8 = (unsigned short)36166;
unsigned char var_10 = (unsigned char)70;
short var_11 = (short)-10755;
unsigned int var_12 = 1404661528U;
long long int var_14 = 2635178117362404658LL;
int zero = 0;
unsigned int var_15 = 4040936539U;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-51;
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
