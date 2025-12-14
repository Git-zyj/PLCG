#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62979;
unsigned char var_2 = (unsigned char)219;
unsigned char var_3 = (unsigned char)22;
unsigned char var_4 = (unsigned char)185;
int var_6 = 241797141;
unsigned char var_8 = (unsigned char)147;
int zero = 0;
unsigned short var_10 = (unsigned short)57626;
unsigned long long int var_11 = 1306958920908972274ULL;
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
