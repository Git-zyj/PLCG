#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19352;
unsigned long long int var_1 = 5014032081136711255ULL;
short var_5 = (short)13200;
unsigned int var_11 = 1577853534U;
unsigned long long int var_13 = 10848224995524005971ULL;
short var_15 = (short)-14951;
int zero = 0;
unsigned char var_17 = (unsigned char)23;
unsigned char var_18 = (unsigned char)136;
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
