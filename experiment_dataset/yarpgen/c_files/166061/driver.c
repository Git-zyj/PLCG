#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-31159;
signed char var_3 = (signed char)126;
unsigned char var_9 = (unsigned char)161;
unsigned short var_12 = (unsigned short)46916;
int zero = 0;
unsigned short var_17 = (unsigned short)41464;
signed char var_18 = (signed char)39;
int var_19 = -1710869031;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
