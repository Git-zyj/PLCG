#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2480916684U;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)174;
unsigned char var_10 = (unsigned char)38;
unsigned short var_14 = (unsigned short)3413;
int var_15 = -817804154;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)5169;
int var_22 = 144930027;
void init() {
}

void checksum() {
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
