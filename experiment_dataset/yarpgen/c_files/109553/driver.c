#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)127;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-123;
short var_10 = (short)24391;
unsigned char var_11 = (unsigned char)162;
int zero = 0;
short var_15 = (short)28220;
unsigned char var_16 = (unsigned char)108;
unsigned int var_17 = 2997629991U;
void init() {
}

void checksum() {
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
