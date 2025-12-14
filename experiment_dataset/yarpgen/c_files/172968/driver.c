#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -83318838;
short var_5 = (short)-22223;
long long int var_6 = -4299795464155483231LL;
short var_7 = (short)16920;
unsigned int var_10 = 3642784206U;
signed char var_12 = (signed char)-19;
int zero = 0;
unsigned char var_13 = (unsigned char)53;
short var_14 = (short)-9370;
short var_15 = (short)13000;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
