#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)86;
short var_2 = (short)25161;
signed char var_3 = (signed char)115;
unsigned char var_8 = (unsigned char)171;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)16;
long long int var_16 = -4769716591703867660LL;
int var_17 = 163379286;
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
