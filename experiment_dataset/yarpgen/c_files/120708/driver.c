#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1601510328;
unsigned long long int var_2 = 678246803975196778ULL;
unsigned long long int var_4 = 16697753356337713270ULL;
int var_14 = 1667176842;
int zero = 0;
int var_15 = 1011056049;
int var_16 = 765289127;
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
