#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13218;
signed char var_7 = (signed char)106;
unsigned char var_16 = (unsigned char)128;
int zero = 0;
unsigned int var_18 = 2161030165U;
signed char var_19 = (signed char)63;
unsigned int var_20 = 1391812023U;
short var_21 = (short)-27867;
unsigned char var_22 = (unsigned char)113;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
