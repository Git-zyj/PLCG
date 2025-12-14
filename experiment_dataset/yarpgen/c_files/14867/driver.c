#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22172;
unsigned char var_1 = (unsigned char)100;
_Bool var_12 = (_Bool)0;
long long int var_15 = -2022401972960326924LL;
int zero = 0;
unsigned char var_16 = (unsigned char)161;
int var_17 = 532021854;
unsigned char var_18 = (unsigned char)4;
signed char var_19 = (signed char)72;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
