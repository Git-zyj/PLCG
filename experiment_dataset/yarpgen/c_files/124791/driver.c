#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2512;
unsigned char var_6 = (unsigned char)15;
unsigned short var_7 = (unsigned short)18371;
short var_11 = (short)21776;
short var_12 = (short)29037;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)-10277;
signed char var_15 = (signed char)-81;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
