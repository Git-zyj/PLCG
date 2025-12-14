#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)197;
short var_6 = (short)14024;
long long int var_8 = -128724798577461671LL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)16070;
int zero = 0;
signed char var_14 = (signed char)(-127 - 1);
unsigned int var_15 = 2403043070U;
unsigned int var_16 = 3851958537U;
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
