#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2281701144U;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)64;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)15860;
unsigned short var_13 = (unsigned short)42972;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
