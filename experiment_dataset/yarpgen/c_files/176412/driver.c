#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13703950452422128014ULL;
signed char var_4 = (signed char)60;
signed char var_7 = (signed char)8;
unsigned long long int var_10 = 6695350124204037278ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)131;
unsigned char var_12 = (unsigned char)115;
unsigned long long int var_13 = 12313750905880741297ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
