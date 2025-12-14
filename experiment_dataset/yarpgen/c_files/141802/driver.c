#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)241;
unsigned long long int var_4 = 10596656590309166213ULL;
unsigned char var_6 = (unsigned char)240;
unsigned char var_7 = (unsigned char)19;
unsigned char var_9 = (unsigned char)244;
int zero = 0;
unsigned long long int var_10 = 11794166929208886680ULL;
unsigned char var_11 = (unsigned char)6;
unsigned char var_12 = (unsigned char)135;
unsigned char var_13 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
