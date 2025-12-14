#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63452;
_Bool var_8 = (_Bool)1;
unsigned long long int var_13 = 15144024423556348626ULL;
short var_15 = (short)11309;
short var_16 = (short)13929;
int zero = 0;
long long int var_19 = -6204448754700373858LL;
unsigned char var_20 = (unsigned char)248;
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
