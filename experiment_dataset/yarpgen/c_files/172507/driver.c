#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3344571124U;
short var_6 = (short)-4647;
short var_8 = (short)-27466;
unsigned char var_10 = (unsigned char)226;
unsigned int var_13 = 2957081834U;
short var_14 = (short)24626;
int zero = 0;
unsigned int var_15 = 2751799065U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
