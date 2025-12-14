#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1560873352U;
unsigned int var_4 = 2084165974U;
unsigned int var_5 = 1696357563U;
unsigned char var_8 = (unsigned char)238;
unsigned int var_9 = 1659184375U;
short var_12 = (short)21723;
int zero = 0;
long long int var_13 = 8505516840428353392LL;
unsigned char var_14 = (unsigned char)40;
signed char var_15 = (signed char)-54;
void init() {
}

void checksum() {
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
