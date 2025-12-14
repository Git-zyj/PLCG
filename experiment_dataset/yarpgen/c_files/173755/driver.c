#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)227;
unsigned long long int var_1 = 16843913666188325614ULL;
unsigned long long int var_2 = 3924456276530573337ULL;
unsigned char var_4 = (unsigned char)216;
unsigned char var_5 = (unsigned char)119;
unsigned char var_7 = (unsigned char)96;
unsigned short var_8 = (unsigned short)56622;
unsigned char var_9 = (unsigned char)189;
unsigned char var_10 = (unsigned char)5;
unsigned short var_11 = (unsigned short)21225;
int zero = 0;
unsigned char var_12 = (unsigned char)116;
unsigned short var_13 = (unsigned short)42029;
unsigned char var_14 = (unsigned char)116;
unsigned short var_15 = (unsigned short)43255;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
