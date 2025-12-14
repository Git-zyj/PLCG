#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 944797926U;
signed char var_3 = (signed char)118;
unsigned short var_4 = (unsigned short)16234;
unsigned char var_7 = (unsigned char)220;
signed char var_10 = (signed char)36;
signed char var_11 = (signed char)31;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-10782;
short var_15 = (short)-18104;
void init() {
}

void checksum() {
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
