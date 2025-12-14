#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)3197;
int var_6 = -2063946232;
unsigned int var_7 = 52849764U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 29587854U;
signed char var_11 = (signed char)58;
int zero = 0;
unsigned short var_12 = (unsigned short)60410;
short var_13 = (short)19605;
signed char var_14 = (signed char)-43;
unsigned int var_15 = 220814358U;
unsigned char var_16 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
