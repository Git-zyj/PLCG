#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)61;
unsigned char var_6 = (unsigned char)251;
int var_7 = 1106223817;
short var_10 = (short)-15570;
int zero = 0;
unsigned long long int var_12 = 13190593161210690587ULL;
unsigned char var_13 = (unsigned char)204;
int var_14 = 1047893945;
unsigned long long int var_15 = 1420746954773468516ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
