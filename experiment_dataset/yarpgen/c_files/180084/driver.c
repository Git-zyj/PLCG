#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-22777;
long long int var_3 = 263020663809206110LL;
signed char var_5 = (signed char)-96;
unsigned short var_10 = (unsigned short)28819;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 2323894852U;
short var_21 = (short)12481;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
