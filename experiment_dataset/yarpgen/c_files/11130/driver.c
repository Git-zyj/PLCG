#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)23606;
unsigned short var_4 = (unsigned short)57320;
signed char var_5 = (signed char)-21;
int var_6 = -1297402903;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)6;
int zero = 0;
signed char var_16 = (signed char)3;
_Bool var_17 = (_Bool)1;
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
