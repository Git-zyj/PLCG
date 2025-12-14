#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2116168282190807542ULL;
_Bool var_3 = (_Bool)1;
signed char var_9 = (signed char)47;
unsigned short var_10 = (unsigned short)62948;
short var_12 = (short)11028;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)811;
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
