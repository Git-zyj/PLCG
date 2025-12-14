#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1173119914U;
unsigned int var_8 = 177630118U;
unsigned int var_10 = 967514928U;
unsigned long long int var_16 = 9752185665480686205ULL;
long long int var_17 = -1449580973576012575LL;
int zero = 0;
unsigned long long int var_19 = 18148089837350250401ULL;
unsigned int var_20 = 749806560U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
