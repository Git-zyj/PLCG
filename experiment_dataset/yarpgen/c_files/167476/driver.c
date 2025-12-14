#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8402946438620386737ULL;
unsigned long long int var_4 = 12245720569978838090ULL;
unsigned long long int var_8 = 11206466405363262063ULL;
int zero = 0;
unsigned long long int var_13 = 14671617907724910408ULL;
unsigned long long int var_14 = 3590475440027771073ULL;
unsigned long long int var_15 = 9114321698685146711ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
