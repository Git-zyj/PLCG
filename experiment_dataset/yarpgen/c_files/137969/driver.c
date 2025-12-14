#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6747422106468153237ULL;
unsigned int var_2 = 64445182U;
unsigned long long int var_4 = 328269231638794960ULL;
unsigned char var_5 = (unsigned char)223;
unsigned char var_7 = (unsigned char)156;
_Bool var_8 = (_Bool)0;
int var_9 = 1117148495;
int zero = 0;
short var_10 = (short)29424;
unsigned int var_11 = 1231400315U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
