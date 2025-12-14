#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)92;
long long int var_2 = -6532256675504383597LL;
_Bool var_3 = (_Bool)0;
int var_7 = -1755024113;
signed char var_12 = (signed char)-84;
unsigned char var_15 = (unsigned char)142;
signed char var_17 = (signed char)29;
int zero = 0;
unsigned char var_18 = (unsigned char)215;
unsigned short var_19 = (unsigned short)11741;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
