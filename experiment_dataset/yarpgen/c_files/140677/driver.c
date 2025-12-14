#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
short var_8 = (short)-24530;
unsigned char var_9 = (unsigned char)227;
signed char var_12 = (signed char)-2;
signed char var_14 = (signed char)-123;
int zero = 0;
unsigned int var_17 = 1876631897U;
short var_18 = (short)32744;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
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
