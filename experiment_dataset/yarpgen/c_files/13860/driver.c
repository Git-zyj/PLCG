#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)30;
unsigned char var_7 = (unsigned char)77;
short var_8 = (short)-8166;
short var_9 = (short)25409;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 1642538629U;
unsigned int var_15 = 807547816U;
int zero = 0;
short var_17 = (short)22937;
unsigned int var_18 = 4138625243U;
unsigned char var_19 = (unsigned char)71;
unsigned char var_20 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
