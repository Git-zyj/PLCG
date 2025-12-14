#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 467364216;
short var_4 = (short)-3059;
short var_7 = (short)27197;
short var_8 = (short)11719;
int zero = 0;
unsigned short var_11 = (unsigned short)3213;
unsigned char var_12 = (unsigned char)231;
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
