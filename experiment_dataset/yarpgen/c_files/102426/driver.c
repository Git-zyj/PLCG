#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4059167631U;
unsigned long long int var_3 = 1895012245595901467ULL;
unsigned long long int var_5 = 10711741517972696047ULL;
unsigned int var_10 = 1491171106U;
unsigned char var_11 = (unsigned char)60;
unsigned char var_15 = (unsigned char)130;
int zero = 0;
signed char var_16 = (signed char)85;
unsigned long long int var_17 = 15490006017818538908ULL;
signed char var_18 = (signed char)96;
void init() {
}

void checksum() {
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
