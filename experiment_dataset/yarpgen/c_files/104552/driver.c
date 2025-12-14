#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_5 = -86162960;
unsigned short var_6 = (unsigned short)56851;
unsigned char var_9 = (unsigned char)100;
int zero = 0;
unsigned short var_11 = (unsigned short)134;
unsigned char var_12 = (unsigned char)101;
int var_13 = 1934191368;
short var_14 = (short)-27484;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
