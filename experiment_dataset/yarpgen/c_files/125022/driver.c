#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48449;
unsigned long long int var_8 = 7875467404764846974ULL;
unsigned long long int var_10 = 8478633969768239320ULL;
long long int var_13 = 4750452743944914856LL;
int zero = 0;
signed char var_15 = (signed char)-3;
signed char var_16 = (signed char)95;
void init() {
}

void checksum() {
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
