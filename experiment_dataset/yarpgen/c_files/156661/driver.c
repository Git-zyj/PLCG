#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3299504612561184717LL;
unsigned short var_10 = (unsigned short)41863;
int zero = 0;
unsigned long long int var_15 = 7193660774481057300ULL;
unsigned char var_16 = (unsigned char)20;
unsigned long long int var_17 = 6765894477795879814ULL;
long long int var_18 = 5285918729468583344LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
