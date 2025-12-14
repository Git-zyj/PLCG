#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42126;
long long int var_6 = 1983283244954173969LL;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)57179;
signed char var_12 = (signed char)59;
int zero = 0;
unsigned int var_17 = 2685779502U;
unsigned char var_18 = (unsigned char)189;
void init() {
}

void checksum() {
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
