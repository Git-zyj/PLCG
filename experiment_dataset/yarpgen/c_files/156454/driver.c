#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)163;
unsigned char var_6 = (unsigned char)255;
unsigned char var_7 = (unsigned char)132;
unsigned char var_9 = (unsigned char)71;
unsigned char var_11 = (unsigned char)241;
int zero = 0;
unsigned char var_15 = (unsigned char)204;
unsigned char var_16 = (unsigned char)4;
unsigned char var_17 = (unsigned char)197;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
