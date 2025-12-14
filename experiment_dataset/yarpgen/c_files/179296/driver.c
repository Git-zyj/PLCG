#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)81;
unsigned char var_5 = (unsigned char)95;
unsigned char var_6 = (unsigned char)49;
unsigned char var_11 = (unsigned char)22;
int zero = 0;
unsigned short var_12 = (unsigned short)8409;
signed char var_13 = (signed char)114;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
