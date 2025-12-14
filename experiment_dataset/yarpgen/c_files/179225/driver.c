#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)174;
unsigned int var_3 = 985429037U;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)43999;
unsigned char var_7 = (unsigned char)113;
unsigned int var_14 = 2823690491U;
unsigned char var_15 = (unsigned char)189;
int zero = 0;
int var_16 = -775340386;
unsigned short var_17 = (unsigned short)57066;
void init() {
}

void checksum() {
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
