#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)2827;
signed char var_8 = (signed char)62;
_Bool var_9 = (_Bool)1;
signed char var_14 = (signed char)43;
unsigned int var_15 = 356151177U;
unsigned char var_16 = (unsigned char)238;
int zero = 0;
int var_20 = -323273063;
short var_21 = (short)-28332;
signed char var_22 = (signed char)-122;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
