#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1146241918002994430LL;
unsigned char var_6 = (unsigned char)81;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
long long int var_14 = -6104930680838866229LL;
unsigned short var_15 = (unsigned short)42525;
int zero = 0;
short var_16 = (short)-9163;
unsigned int var_17 = 325391189U;
unsigned short var_18 = (unsigned short)37734;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
