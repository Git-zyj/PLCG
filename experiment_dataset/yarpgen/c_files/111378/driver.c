#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)176;
long long int var_3 = -7914675664844506222LL;
unsigned char var_4 = (unsigned char)207;
unsigned char var_5 = (unsigned char)94;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)78;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_20 = -1525272638;
signed char var_21 = (signed char)102;
unsigned char var_22 = (unsigned char)248;
int var_23 = -897873538;
unsigned short var_24 = (unsigned short)50787;
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
