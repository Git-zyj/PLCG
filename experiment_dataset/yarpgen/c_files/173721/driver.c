#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8702375106291867389LL;
long long int var_3 = 3635950607866750993LL;
unsigned char var_4 = (unsigned char)79;
unsigned short var_6 = (unsigned short)17910;
unsigned int var_11 = 1767871824U;
unsigned long long int var_15 = 14341361579380414034ULL;
int zero = 0;
unsigned long long int var_20 = 8180602830754564448ULL;
unsigned int var_21 = 2170335258U;
unsigned short var_22 = (unsigned short)40884;
unsigned char var_23 = (unsigned char)40;
unsigned int var_24 = 121288447U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
