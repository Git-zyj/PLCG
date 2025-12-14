#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24675;
int var_1 = 1727800304;
unsigned char var_9 = (unsigned char)2;
long long int var_11 = -8342638136097774540LL;
unsigned char var_18 = (unsigned char)208;
int zero = 0;
short var_20 = (short)7237;
signed char var_21 = (signed char)95;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)49388;
unsigned int var_24 = 3034947341U;
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
