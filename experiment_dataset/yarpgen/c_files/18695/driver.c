#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)30;
unsigned char var_2 = (unsigned char)199;
unsigned char var_3 = (unsigned char)73;
unsigned char var_4 = (unsigned char)184;
unsigned char var_5 = (unsigned char)238;
unsigned int var_6 = 1586414160U;
unsigned char var_7 = (unsigned char)49;
unsigned char var_8 = (unsigned char)180;
unsigned int var_9 = 3666172404U;
int zero = 0;
unsigned char var_10 = (unsigned char)58;
unsigned int var_11 = 2095776733U;
unsigned char var_12 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
