#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28907;
unsigned short var_2 = (unsigned short)33268;
unsigned char var_5 = (unsigned char)118;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)29970;
unsigned char var_11 = (unsigned char)56;
unsigned char var_12 = (unsigned char)108;
unsigned int var_16 = 2255514000U;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)110;
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
