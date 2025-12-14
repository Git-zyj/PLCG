#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)196;
signed char var_5 = (signed char)97;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)154;
short var_12 = (short)17163;
unsigned short var_14 = (unsigned short)54996;
int zero = 0;
int var_16 = -679753310;
short var_17 = (short)7302;
unsigned short var_18 = (unsigned short)5702;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
