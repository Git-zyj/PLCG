#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8225687072729823797LL;
signed char var_6 = (signed char)-41;
signed char var_10 = (signed char)6;
unsigned int var_11 = 1416475043U;
unsigned short var_14 = (unsigned short)19935;
int zero = 0;
long long int var_16 = 3411587247166336980LL;
signed char var_17 = (signed char)-12;
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
