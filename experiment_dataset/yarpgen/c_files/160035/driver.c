#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7723212236731991509LL;
unsigned char var_5 = (unsigned char)219;
short var_7 = (short)-16825;
int var_12 = -1221161096;
long long int var_13 = 5619936026196122866LL;
unsigned char var_15 = (unsigned char)228;
int zero = 0;
unsigned short var_17 = (unsigned short)45716;
unsigned long long int var_18 = 6106495799520861929ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
