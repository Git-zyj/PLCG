#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)50782;
int var_4 = 263073740;
unsigned int var_6 = 2630896370U;
signed char var_9 = (signed char)27;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-46;
int zero = 0;
unsigned short var_16 = (unsigned short)3984;
unsigned char var_17 = (unsigned char)126;
void init() {
}

void checksum() {
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
