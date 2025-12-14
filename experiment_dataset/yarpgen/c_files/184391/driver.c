#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27312;
unsigned long long int var_4 = 16296923662048715584ULL;
short var_6 = (short)-3229;
unsigned long long int var_7 = 3196629143941420342ULL;
short var_8 = (short)15612;
int zero = 0;
unsigned char var_10 = (unsigned char)56;
int var_11 = -128741793;
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
