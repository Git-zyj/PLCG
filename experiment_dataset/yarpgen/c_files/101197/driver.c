#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27200;
short var_1 = (short)-15461;
unsigned short var_2 = (unsigned short)19143;
unsigned char var_4 = (unsigned char)69;
unsigned int var_17 = 2320528670U;
short var_18 = (short)-13563;
int zero = 0;
short var_20 = (short)692;
_Bool var_21 = (_Bool)0;
int var_22 = -284677417;
unsigned char var_23 = (unsigned char)79;
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
