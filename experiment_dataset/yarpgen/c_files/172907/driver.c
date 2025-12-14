#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)22497;
int var_11 = 593207239;
unsigned char var_12 = (unsigned char)228;
unsigned char var_14 = (unsigned char)116;
int zero = 0;
unsigned short var_15 = (unsigned short)5960;
unsigned char var_16 = (unsigned char)209;
unsigned short var_17 = (unsigned short)52518;
unsigned char var_18 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
