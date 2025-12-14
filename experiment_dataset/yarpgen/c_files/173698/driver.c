#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 15724644U;
unsigned short var_3 = (unsigned short)3080;
signed char var_7 = (signed char)28;
int zero = 0;
unsigned int var_18 = 1541106384U;
unsigned long long int var_19 = 120871086737423599ULL;
unsigned long long int var_20 = 2579412421871354125ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
