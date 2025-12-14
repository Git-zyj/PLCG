#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1669101713;
signed char var_1 = (signed char)115;
_Bool var_3 = (_Bool)1;
short var_5 = (short)539;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)34775;
int zero = 0;
unsigned short var_11 = (unsigned short)65388;
unsigned char var_12 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
