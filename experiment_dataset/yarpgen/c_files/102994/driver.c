#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22158;
unsigned int var_3 = 1940535404U;
unsigned int var_4 = 2262009367U;
unsigned char var_5 = (unsigned char)119;
long long int var_7 = 5385895658866035769LL;
int var_9 = 70174624;
unsigned char var_11 = (unsigned char)170;
unsigned char var_12 = (unsigned char)172;
unsigned char var_14 = (unsigned char)205;
int zero = 0;
short var_17 = (short)-27843;
unsigned int var_18 = 732883680U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
