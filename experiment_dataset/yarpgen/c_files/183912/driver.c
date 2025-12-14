#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33422;
unsigned char var_6 = (unsigned char)40;
short var_10 = (short)-19882;
unsigned int var_13 = 2580042570U;
int zero = 0;
unsigned short var_15 = (unsigned short)49791;
int var_16 = -939603807;
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
