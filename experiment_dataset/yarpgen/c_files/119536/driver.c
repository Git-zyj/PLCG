#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-28755;
long long int var_5 = 8773459414040614507LL;
unsigned long long int var_6 = 15564186758670922301ULL;
long long int var_8 = 6257249807654954005LL;
short var_16 = (short)20510;
unsigned char var_17 = (unsigned char)81;
int zero = 0;
long long int var_18 = -1170193831164711800LL;
unsigned long long int var_19 = 6875969828406091465ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
