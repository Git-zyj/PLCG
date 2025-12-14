#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)-15745;
_Bool var_6 = (_Bool)0;
unsigned int var_11 = 3025855885U;
short var_12 = (short)288;
short var_15 = (short)-2411;
unsigned short var_18 = (unsigned short)53750;
int zero = 0;
unsigned int var_20 = 1931187528U;
signed char var_21 = (signed char)18;
signed char var_22 = (signed char)28;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
