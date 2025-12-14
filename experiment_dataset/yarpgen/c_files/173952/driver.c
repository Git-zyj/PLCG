#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_4 = (short)-30144;
short var_5 = (short)29316;
signed char var_7 = (signed char)-41;
unsigned short var_8 = (unsigned short)49557;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
