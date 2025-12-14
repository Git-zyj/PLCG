#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17846;
int var_1 = -1856008044;
short var_6 = (short)-1983;
short var_7 = (short)2618;
unsigned char var_10 = (unsigned char)41;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-21010;
signed char var_15 = (signed char)97;
int zero = 0;
short var_16 = (short)543;
signed char var_17 = (signed char)120;
unsigned int var_18 = 791650801U;
void init() {
}

void checksum() {
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
