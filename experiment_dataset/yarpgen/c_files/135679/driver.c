#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3476227027238404494ULL;
unsigned long long int var_10 = 11819492418932433087ULL;
unsigned char var_11 = (unsigned char)157;
signed char var_12 = (signed char)69;
int var_13 = -1480434304;
unsigned char var_14 = (unsigned char)229;
int zero = 0;
signed char var_15 = (signed char)53;
short var_16 = (short)-7774;
short var_17 = (short)-5957;
short var_18 = (short)-8179;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
