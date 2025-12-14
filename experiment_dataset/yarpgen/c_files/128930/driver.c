#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7960;
unsigned long long int var_2 = 14540254331205526126ULL;
int var_3 = -2124643546;
unsigned char var_4 = (unsigned char)49;
long long int var_6 = 4198265474751755179LL;
int var_9 = -631147673;
unsigned char var_10 = (unsigned char)198;
int zero = 0;
unsigned long long int var_11 = 18359151882094475344ULL;
unsigned long long int var_12 = 7106915742952133065ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
