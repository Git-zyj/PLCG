#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)18;
unsigned short var_5 = (unsigned short)24568;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)82;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)28100;
unsigned char var_17 = (unsigned char)58;
unsigned int var_18 = 3781426413U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
