#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7093;
unsigned char var_4 = (unsigned char)41;
unsigned long long int var_5 = 8123409671028704715ULL;
unsigned long long int var_6 = 14748770049394622118ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)27811;
unsigned char var_11 = (unsigned char)183;
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
