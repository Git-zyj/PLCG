#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)56;
signed char var_8 = (signed char)4;
int var_12 = -2041039441;
signed char var_13 = (signed char)80;
int zero = 0;
unsigned short var_14 = (unsigned short)35270;
unsigned long long int var_15 = 14753229045819438470ULL;
unsigned char var_16 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
