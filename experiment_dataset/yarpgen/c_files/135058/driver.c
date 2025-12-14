#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)166;
unsigned short var_8 = (unsigned short)4970;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 18051706768864230730ULL;
short var_12 = (short)32563;
signed char var_14 = (signed char)66;
int zero = 0;
unsigned short var_15 = (unsigned short)52096;
int var_16 = 268767871;
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
