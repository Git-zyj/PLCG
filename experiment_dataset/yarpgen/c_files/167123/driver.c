#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)238;
unsigned char var_4 = (unsigned char)98;
signed char var_5 = (signed char)39;
int var_8 = -965264504;
int var_10 = 1356734380;
unsigned char var_11 = (unsigned char)83;
unsigned char var_12 = (unsigned char)189;
short var_15 = (short)15060;
int zero = 0;
unsigned short var_20 = (unsigned short)29920;
unsigned char var_21 = (unsigned char)144;
short var_22 = (short)-8396;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
