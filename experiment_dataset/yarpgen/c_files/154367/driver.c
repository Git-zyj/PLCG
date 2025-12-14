#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)44;
unsigned char var_2 = (unsigned char)26;
unsigned short var_6 = (unsigned short)62795;
int zero = 0;
unsigned char var_12 = (unsigned char)171;
unsigned short var_13 = (unsigned short)7180;
unsigned char var_14 = (unsigned char)158;
unsigned short var_15 = (unsigned short)47237;
unsigned short var_16 = (unsigned short)13037;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
