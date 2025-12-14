#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1342;
unsigned short var_2 = (unsigned short)7184;
unsigned short var_3 = (unsigned short)33372;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-81;
short var_8 = (short)13334;
unsigned char var_9 = (unsigned char)67;
unsigned char var_13 = (unsigned char)152;
unsigned char var_14 = (unsigned char)231;
int zero = 0;
unsigned char var_16 = (unsigned char)21;
unsigned char var_17 = (unsigned char)161;
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
