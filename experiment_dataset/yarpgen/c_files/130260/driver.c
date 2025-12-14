#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)574;
unsigned char var_7 = (unsigned char)228;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 376397303U;
unsigned char var_12 = (unsigned char)158;
int zero = 0;
long long int var_15 = 8732461468293465729LL;
short var_16 = (short)2019;
void init() {
}

void checksum() {
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
