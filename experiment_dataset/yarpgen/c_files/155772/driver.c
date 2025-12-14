#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6777553492368873657ULL;
unsigned long long int var_3 = 11625010890561525066ULL;
unsigned long long int var_11 = 14505416323911118564ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)63411;
int var_16 = 1545669814;
void init() {
}

void checksum() {
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
