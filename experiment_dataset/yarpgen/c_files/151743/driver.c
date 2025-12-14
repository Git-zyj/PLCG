#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1641700050106642412ULL;
unsigned long long int var_3 = 16192631140096981272ULL;
unsigned long long int var_10 = 6594916908929806441ULL;
unsigned long long int var_11 = 13052883972501122289ULL;
unsigned long long int var_13 = 2537837761446491611ULL;
int zero = 0;
unsigned long long int var_16 = 2791456112639270903ULL;
unsigned long long int var_17 = 12999844474107782463ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
