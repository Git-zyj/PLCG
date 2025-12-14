#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2252388785U;
unsigned long long int var_10 = 11165446462343755787ULL;
unsigned int var_11 = 902927216U;
unsigned int var_14 = 1799072977U;
unsigned short var_17 = (unsigned short)43729;
int zero = 0;
unsigned int var_18 = 765818410U;
unsigned short var_19 = (unsigned short)5279;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
