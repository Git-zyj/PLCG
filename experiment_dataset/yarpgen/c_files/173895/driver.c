#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 733982493U;
unsigned char var_12 = (unsigned char)160;
long long int var_13 = 1525901397703366876LL;
int zero = 0;
unsigned short var_17 = (unsigned short)57124;
unsigned short var_18 = (unsigned short)54647;
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
