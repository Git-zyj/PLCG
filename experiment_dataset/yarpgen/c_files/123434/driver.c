#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1686442425U;
unsigned long long int var_9 = 16717778718629287664ULL;
unsigned int var_17 = 1587096268U;
int zero = 0;
unsigned int var_18 = 3324561875U;
unsigned long long int var_19 = 12854722147931274521ULL;
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
