#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)188;
unsigned char var_3 = (unsigned char)199;
unsigned char var_6 = (unsigned char)170;
unsigned char var_11 = (unsigned char)239;
unsigned short var_14 = (unsigned short)29090;
int zero = 0;
unsigned char var_17 = (unsigned char)78;
unsigned int var_18 = 1812381458U;
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
