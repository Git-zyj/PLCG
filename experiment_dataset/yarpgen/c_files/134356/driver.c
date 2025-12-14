#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2003694583U;
unsigned int var_1 = 2561559138U;
unsigned short var_2 = (unsigned short)48268;
unsigned char var_4 = (unsigned char)111;
int var_6 = 332258638;
unsigned char var_8 = (unsigned char)102;
int zero = 0;
unsigned int var_13 = 1221733071U;
unsigned int var_14 = 2611802962U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
