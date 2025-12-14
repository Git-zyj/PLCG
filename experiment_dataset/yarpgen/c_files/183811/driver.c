#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)255;
unsigned long long int var_5 = 2040475585432347104ULL;
unsigned int var_8 = 4107862691U;
int zero = 0;
unsigned char var_12 = (unsigned char)170;
unsigned short var_13 = (unsigned short)29095;
unsigned char var_14 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
