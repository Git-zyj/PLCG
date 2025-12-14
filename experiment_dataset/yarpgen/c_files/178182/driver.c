#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)189;
_Bool var_2 = (_Bool)0;
long long int var_4 = -8309575881050468943LL;
long long int var_5 = 3809474777113728087LL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-10012;
unsigned short var_9 = (unsigned short)53959;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 957366026U;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)0;
signed char var_16 = (signed char)122;
long long int var_17 = 3196697356977509884LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
