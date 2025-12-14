#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)6074;
short var_5 = (short)9915;
int var_8 = 791339807;
unsigned long long int var_13 = 2827860408303437170ULL;
int zero = 0;
int var_14 = 734192942;
signed char var_15 = (signed char)-108;
unsigned char var_16 = (unsigned char)230;
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
