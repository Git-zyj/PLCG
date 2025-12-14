#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8797398044314765496LL;
signed char var_4 = (signed char)99;
long long int var_9 = 7975820296687192632LL;
int zero = 0;
unsigned long long int var_14 = 7947807829014323319ULL;
unsigned int var_15 = 3730825514U;
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
