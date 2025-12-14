#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1745206316;
unsigned short var_4 = (unsigned short)14403;
unsigned char var_8 = (unsigned char)47;
unsigned char var_11 = (unsigned char)237;
unsigned int var_14 = 440291577U;
int zero = 0;
unsigned short var_17 = (unsigned short)1856;
unsigned short var_18 = (unsigned short)13036;
signed char var_19 = (signed char)-127;
int var_20 = 798498872;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
