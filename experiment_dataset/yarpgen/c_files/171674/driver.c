#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32323;
unsigned int var_5 = 2619287981U;
unsigned int var_6 = 802472858U;
int zero = 0;
unsigned short var_18 = (unsigned short)14172;
unsigned char var_19 = (unsigned char)162;
unsigned char var_20 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
