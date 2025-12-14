#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)154;
int var_2 = 1940126681;
short var_3 = (short)-1641;
unsigned char var_5 = (unsigned char)45;
unsigned char var_6 = (unsigned char)183;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = -174914672592918377LL;
short var_13 = (short)16438;
int var_14 = 329011585;
signed char var_15 = (signed char)77;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
