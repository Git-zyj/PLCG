#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38393;
long long int var_3 = -1828502767064598209LL;
unsigned int var_8 = 3589326257U;
int var_10 = 1111416280;
unsigned long long int var_11 = 18310982597226369036ULL;
short var_15 = (short)8408;
int zero = 0;
unsigned char var_18 = (unsigned char)144;
short var_19 = (short)-18250;
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
