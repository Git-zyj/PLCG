#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 7810207653608932021LL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)55;
signed char var_8 = (signed char)-91;
unsigned char var_9 = (unsigned char)191;
unsigned long long int var_10 = 10288036269200390282ULL;
unsigned char var_11 = (unsigned char)109;
long long int var_13 = 2139318119895334999LL;
unsigned int var_14 = 61818268U;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -1383178116;
void init() {
}

void checksum() {
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
