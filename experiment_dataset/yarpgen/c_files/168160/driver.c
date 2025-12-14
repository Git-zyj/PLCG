#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16275;
unsigned char var_3 = (unsigned char)164;
unsigned char var_5 = (unsigned char)125;
int var_6 = -1048710845;
signed char var_7 = (signed char)-98;
short var_8 = (short)21178;
int zero = 0;
long long int var_10 = -2710867106081138168LL;
long long int var_11 = 1843901501597300982LL;
int var_12 = -2009846440;
unsigned int var_13 = 3771120348U;
unsigned long long int var_14 = 17271259749232299000ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
