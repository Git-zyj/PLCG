#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3156085263U;
unsigned int var_2 = 2618389821U;
long long int var_3 = -3877999753759464167LL;
signed char var_7 = (signed char)-127;
short var_8 = (short)6656;
unsigned int var_9 = 3473993614U;
short var_10 = (short)23641;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)178;
short var_16 = (short)-4699;
void init() {
}

void checksum() {
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
