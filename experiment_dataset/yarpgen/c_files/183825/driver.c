#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)41;
unsigned char var_1 = (unsigned char)38;
unsigned char var_3 = (unsigned char)216;
unsigned char var_6 = (unsigned char)1;
unsigned char var_7 = (unsigned char)99;
unsigned char var_8 = (unsigned char)100;
unsigned char var_9 = (unsigned char)47;
int zero = 0;
unsigned char var_13 = (unsigned char)50;
unsigned char var_14 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
