#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10923859078783986436ULL;
unsigned int var_11 = 1030563725U;
short var_19 = (short)19677;
int zero = 0;
unsigned int var_20 = 2683966252U;
short var_21 = (short)-8350;
unsigned int var_22 = 3407701266U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
