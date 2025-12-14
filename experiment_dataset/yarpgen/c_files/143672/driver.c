#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18055149568160368759ULL;
unsigned long long int var_6 = 851630606277398116ULL;
unsigned long long int var_9 = 1268687938618904233ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)63785;
unsigned short var_19 = (unsigned short)4777;
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
