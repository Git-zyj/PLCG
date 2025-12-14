#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2705537705U;
signed char var_3 = (signed char)-125;
long long int var_5 = 9155257537285285218LL;
unsigned int var_7 = 3667736252U;
int zero = 0;
unsigned short var_10 = (unsigned short)29912;
signed char var_11 = (signed char)-108;
unsigned char var_12 = (unsigned char)56;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
