#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)54609;
unsigned short var_3 = (unsigned short)46248;
unsigned short var_4 = (unsigned short)17004;
int var_7 = 126970959;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)44794;
int zero = 0;
unsigned char var_12 = (unsigned char)111;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2067063473U;
signed char var_15 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
