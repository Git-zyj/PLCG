#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)6;
unsigned char var_7 = (unsigned char)80;
unsigned char var_9 = (unsigned char)144;
_Bool var_11 = (_Bool)0;
short var_13 = (short)24023;
int zero = 0;
unsigned char var_14 = (unsigned char)193;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
