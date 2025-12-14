#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)3913;
unsigned short var_4 = (unsigned short)48908;
short var_5 = (short)-21721;
long long int var_6 = 7450300381084409686LL;
unsigned char var_8 = (unsigned char)253;
short var_9 = (short)-29820;
signed char var_11 = (signed char)41;
int zero = 0;
unsigned int var_12 = 4035952527U;
unsigned int var_13 = 2336625041U;
void init() {
}

void checksum() {
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
