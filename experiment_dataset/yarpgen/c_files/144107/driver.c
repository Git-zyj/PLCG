#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)231;
long long int var_2 = -1941665837804789083LL;
unsigned char var_5 = (unsigned char)41;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)48772;
unsigned long long int var_9 = 3008960627649202746ULL;
short var_10 = (short)-19293;
int zero = 0;
unsigned char var_13 = (unsigned char)171;
unsigned char var_14 = (unsigned char)241;
short var_15 = (short)-5983;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
