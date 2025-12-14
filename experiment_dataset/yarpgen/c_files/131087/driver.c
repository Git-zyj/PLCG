#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13897231254736061895ULL;
unsigned long long int var_7 = 10327401104852863028ULL;
int var_8 = 419798530;
int zero = 0;
unsigned short var_10 = (unsigned short)57059;
long long int var_11 = 1818929655895714653LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
