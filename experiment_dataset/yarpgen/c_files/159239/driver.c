#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8694687613619127279ULL;
unsigned long long int var_6 = 3733558562505037029ULL;
unsigned long long int var_13 = 872329159313959724ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)99;
unsigned long long int var_16 = 17810657633562560174ULL;
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
