#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1068581191778005718ULL;
unsigned int var_14 = 1479495636U;
int var_16 = 1935146206;
int var_17 = -546597007;
int zero = 0;
long long int var_20 = -2316261842582817651LL;
unsigned long long int var_21 = 5253096674817717301ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
