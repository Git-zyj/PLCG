#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12398;
signed char var_7 = (signed char)114;
_Bool var_13 = (_Bool)1;
unsigned char var_16 = (unsigned char)113;
int zero = 0;
unsigned char var_19 = (unsigned char)31;
unsigned int var_20 = 3932689229U;
void init() {
}

void checksum() {
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
