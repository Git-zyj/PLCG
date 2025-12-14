#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)107;
unsigned long long int var_4 = 17710120456345021355ULL;
unsigned long long int var_7 = 5781663308782502947ULL;
unsigned char var_8 = (unsigned char)53;
unsigned long long int var_10 = 9749289822518830012ULL;
int var_12 = -988778214;
int zero = 0;
long long int var_14 = -7886964826786740921LL;
signed char var_15 = (signed char)124;
unsigned int var_16 = 3780502628U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
