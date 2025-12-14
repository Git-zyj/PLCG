#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)59;
unsigned char var_2 = (unsigned char)32;
unsigned char var_4 = (unsigned char)174;
unsigned char var_6 = (unsigned char)142;
unsigned char var_7 = (unsigned char)187;
unsigned char var_8 = (unsigned char)7;
int zero = 0;
unsigned char var_11 = (unsigned char)250;
unsigned char var_12 = (unsigned char)112;
unsigned char var_13 = (unsigned char)164;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
