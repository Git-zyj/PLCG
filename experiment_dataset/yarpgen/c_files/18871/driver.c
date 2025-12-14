#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2030967270U;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-25503;
signed char var_5 = (signed char)52;
short var_6 = (short)23157;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_12 = (short)30484;
unsigned char var_13 = (unsigned char)159;
long long int var_14 = 3131677686312602839LL;
long long int var_15 = 2831927037551343600LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
