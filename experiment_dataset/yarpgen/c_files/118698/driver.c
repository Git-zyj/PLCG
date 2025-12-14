#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)16730;
unsigned char var_5 = (unsigned char)1;
unsigned long long int var_6 = 15824144244673212295ULL;
int var_7 = -1525511637;
unsigned short var_8 = (unsigned short)58531;
unsigned char var_9 = (unsigned char)218;
int zero = 0;
unsigned char var_11 = (unsigned char)185;
unsigned char var_12 = (unsigned char)237;
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
