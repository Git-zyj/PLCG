#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1107184939;
short var_1 = (short)15487;
unsigned char var_5 = (unsigned char)198;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)-28;
short var_13 = (short)-2657;
int zero = 0;
unsigned int var_15 = 1738475375U;
_Bool var_16 = (_Bool)0;
int var_17 = -1009568401;
_Bool var_18 = (_Bool)1;
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
