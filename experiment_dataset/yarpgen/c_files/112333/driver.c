#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
unsigned int var_3 = 627593001U;
unsigned int var_4 = 2420628397U;
unsigned int var_5 = 470457916U;
short var_6 = (short)19301;
int zero = 0;
unsigned int var_14 = 482086409U;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)73;
unsigned short var_17 = (unsigned short)19511;
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
