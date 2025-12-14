#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)99;
unsigned char var_5 = (unsigned char)92;
unsigned char var_7 = (unsigned char)151;
unsigned char var_8 = (unsigned char)195;
int zero = 0;
unsigned char var_11 = (unsigned char)228;
unsigned char var_12 = (unsigned char)134;
void init() {
}

void checksum() {
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
