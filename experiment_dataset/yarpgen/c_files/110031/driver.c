#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17246961435101114ULL;
unsigned int var_13 = 582347916U;
signed char var_16 = (signed char)-84;
signed char var_17 = (signed char)-70;
int var_18 = -1815939698;
unsigned char var_19 = (unsigned char)175;
int zero = 0;
unsigned long long int var_20 = 17872817544876469044ULL;
signed char var_21 = (signed char)-40;
unsigned char var_22 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
