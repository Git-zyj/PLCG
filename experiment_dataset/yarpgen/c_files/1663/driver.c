#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)72;
unsigned char var_2 = (unsigned char)47;
unsigned short var_5 = (unsigned short)973;
unsigned char var_7 = (unsigned char)83;
int zero = 0;
unsigned char var_11 = (unsigned char)164;
unsigned char var_12 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
