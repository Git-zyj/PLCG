#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55485;
unsigned int var_5 = 2980908493U;
unsigned int var_6 = 1262107374U;
int var_7 = -1634229938;
unsigned char var_8 = (unsigned char)8;
int zero = 0;
unsigned int var_12 = 3990302610U;
unsigned short var_13 = (unsigned short)5044;
signed char var_14 = (signed char)38;
unsigned char var_15 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
