#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)239;
unsigned char var_3 = (unsigned char)157;
unsigned char var_6 = (unsigned char)114;
unsigned char var_8 = (unsigned char)111;
int zero = 0;
unsigned char var_11 = (unsigned char)241;
unsigned char var_12 = (unsigned char)138;
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
