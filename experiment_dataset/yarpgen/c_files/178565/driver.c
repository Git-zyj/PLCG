#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7152802663876281955LL;
unsigned char var_2 = (unsigned char)248;
unsigned char var_4 = (unsigned char)171;
unsigned char var_6 = (unsigned char)64;
long long int var_8 = -6238361691921644945LL;
int zero = 0;
long long int var_10 = -9207700033898808520LL;
unsigned char var_11 = (unsigned char)100;
long long int var_12 = 7089301604873680005LL;
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
