#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12489;
unsigned char var_1 = (unsigned char)202;
signed char var_2 = (signed char)-73;
unsigned int var_4 = 3565013018U;
unsigned short var_5 = (unsigned short)27986;
unsigned char var_6 = (unsigned char)143;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 889854551U;
int zero = 0;
unsigned int var_10 = 2090031937U;
signed char var_11 = (signed char)38;
unsigned int var_12 = 1166099472U;
short var_13 = (short)-13063;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
