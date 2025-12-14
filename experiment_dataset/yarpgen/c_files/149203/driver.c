#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1202276870;
unsigned int var_6 = 1932290591U;
long long int var_8 = -6969144606426440160LL;
unsigned long long int var_9 = 2312351367179594054ULL;
unsigned short var_10 = (unsigned short)54508;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-6;
int zero = 0;
unsigned short var_13 = (unsigned short)42407;
short var_14 = (short)2609;
unsigned int var_15 = 3684334576U;
unsigned int var_16 = 2428884975U;
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
