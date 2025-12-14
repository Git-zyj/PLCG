#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1421819641;
unsigned short var_2 = (unsigned short)7801;
unsigned char var_10 = (unsigned char)192;
int zero = 0;
unsigned char var_15 = (unsigned char)200;
signed char var_16 = (signed char)-5;
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
