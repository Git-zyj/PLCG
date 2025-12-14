#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4830055195244061205LL;
unsigned char var_2 = (unsigned char)224;
signed char var_8 = (signed char)78;
unsigned short var_9 = (unsigned short)16125;
short var_10 = (short)-5391;
int zero = 0;
unsigned short var_11 = (unsigned short)2765;
short var_12 = (short)17429;
unsigned int var_13 = 2833929765U;
signed char var_14 = (signed char)43;
unsigned short var_15 = (unsigned short)19135;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
