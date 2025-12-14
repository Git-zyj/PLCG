#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3078;
int var_1 = -2026965700;
unsigned long long int var_2 = 17111852421502702298ULL;
unsigned char var_4 = (unsigned char)119;
unsigned int var_5 = 650300163U;
int zero = 0;
unsigned int var_10 = 1111531947U;
unsigned short var_11 = (unsigned short)9665;
int var_12 = 1110582957;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
