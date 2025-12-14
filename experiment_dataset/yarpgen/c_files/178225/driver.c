#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)214;
unsigned short var_13 = (unsigned short)41090;
unsigned long long int var_15 = 1273099388258874378ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)236;
long long int var_18 = -406785063689953652LL;
unsigned char var_19 = (unsigned char)120;
long long int var_20 = 6462473066001362429LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
