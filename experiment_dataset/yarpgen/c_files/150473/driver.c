#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)146;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)217;
short var_9 = (short)-17584;
short var_10 = (short)8442;
int zero = 0;
signed char var_11 = (signed char)30;
unsigned short var_12 = (unsigned short)47586;
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
