#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)6393;
short var_3 = (short)19091;
unsigned char var_6 = (unsigned char)199;
unsigned int var_8 = 107510149U;
int zero = 0;
unsigned long long int var_12 = 5185262946019008703ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 4740045801290111645ULL;
short var_15 = (short)-13130;
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
