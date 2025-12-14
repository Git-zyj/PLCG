#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1999533252;
short var_7 = (short)28525;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)26041;
long long int var_13 = -1532918052814483681LL;
signed char var_14 = (signed char)-114;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)85;
signed char var_17 = (signed char)101;
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
