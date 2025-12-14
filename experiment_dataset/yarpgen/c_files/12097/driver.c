#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_5 = (short)-29769;
signed char var_7 = (signed char)-69;
unsigned short var_8 = (unsigned short)62949;
signed char var_10 = (signed char)59;
int zero = 0;
unsigned short var_11 = (unsigned short)608;
unsigned int var_12 = 3538143780U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
