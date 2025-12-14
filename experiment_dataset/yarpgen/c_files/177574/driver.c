#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18367;
long long int var_1 = 855119247661773784LL;
_Bool var_3 = (_Bool)1;
short var_6 = (short)-12792;
long long int var_12 = 1453467953464747835LL;
signed char var_13 = (signed char)17;
short var_14 = (short)10237;
unsigned long long int var_16 = 485997263787211782ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)17391;
unsigned long long int var_20 = 12044735514148141632ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
