#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)140;
int var_1 = 1588851942;
unsigned int var_2 = 1528122010U;
unsigned char var_5 = (unsigned char)157;
int zero = 0;
unsigned long long int var_14 = 3587996050735338312ULL;
unsigned int var_15 = 1677961397U;
void init() {
}

void checksum() {
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
