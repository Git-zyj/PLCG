#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)34;
unsigned char var_2 = (unsigned char)32;
unsigned char var_8 = (unsigned char)9;
unsigned short var_15 = (unsigned short)11910;
unsigned long long int var_17 = 13848728266444312863ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)227;
unsigned char var_21 = (unsigned char)48;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
