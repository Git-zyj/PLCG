#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35591;
unsigned char var_3 = (unsigned char)147;
unsigned long long int var_4 = 6583382713458185745ULL;
unsigned long long int var_7 = 7738656505744537065ULL;
int var_12 = 1441809523;
int zero = 0;
unsigned long long int var_16 = 10843224916396990846ULL;
unsigned char var_17 = (unsigned char)147;
void init() {
}

void checksum() {
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
