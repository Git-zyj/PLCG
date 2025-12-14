#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)67;
unsigned char var_3 = (unsigned char)8;
unsigned char var_5 = (unsigned char)174;
unsigned char var_6 = (unsigned char)14;
unsigned char var_8 = (unsigned char)67;
unsigned char var_10 = (unsigned char)99;
unsigned char var_11 = (unsigned char)197;
unsigned char var_12 = (unsigned char)234;
unsigned char var_13 = (unsigned char)216;
unsigned char var_14 = (unsigned char)29;
int zero = 0;
unsigned char var_15 = (unsigned char)145;
unsigned char var_16 = (unsigned char)85;
unsigned char var_17 = (unsigned char)195;
unsigned char var_18 = (unsigned char)254;
unsigned char var_19 = (unsigned char)97;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
