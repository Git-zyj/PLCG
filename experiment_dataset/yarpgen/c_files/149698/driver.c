#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)140;
unsigned char var_7 = (unsigned char)106;
unsigned char var_8 = (unsigned char)188;
unsigned char var_12 = (unsigned char)77;
unsigned char var_16 = (unsigned char)235;
int zero = 0;
unsigned char var_18 = (unsigned char)10;
unsigned char var_19 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
