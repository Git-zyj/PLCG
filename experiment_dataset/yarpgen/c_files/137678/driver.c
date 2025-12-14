#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)2;
unsigned char var_3 = (unsigned char)230;
short var_4 = (short)20371;
unsigned short var_5 = (unsigned short)53065;
unsigned char var_8 = (unsigned char)180;
int zero = 0;
int var_10 = 9108862;
unsigned char var_11 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
