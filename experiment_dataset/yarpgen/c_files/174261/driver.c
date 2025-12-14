#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5896063943053855404ULL;
short var_3 = (short)26773;
unsigned long long int var_4 = 16689613513015998583ULL;
short var_8 = (short)-5811;
int zero = 0;
signed char var_14 = (signed char)-114;
short var_15 = (short)-4412;
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
