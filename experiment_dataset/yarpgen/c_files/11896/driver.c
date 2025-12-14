#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)29;
unsigned short var_9 = (unsigned short)59263;
unsigned short var_13 = (unsigned short)14192;
short var_15 = (short)14345;
int zero = 0;
short var_17 = (short)7558;
unsigned short var_18 = (unsigned short)59835;
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
