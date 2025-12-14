#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_9 = (unsigned short)63339;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)102;
int zero = 0;
unsigned char var_15 = (unsigned char)143;
unsigned int var_16 = 3447930999U;
signed char var_17 = (signed char)43;
unsigned short var_18 = (unsigned short)19679;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
