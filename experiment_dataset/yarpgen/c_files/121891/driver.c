#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7564721935120855048ULL;
signed char var_4 = (signed char)51;
unsigned long long int var_5 = 11964676756347118175ULL;
unsigned char var_6 = (unsigned char)221;
unsigned long long int var_7 = 18105142125651455508ULL;
signed char var_9 = (signed char)94;
int zero = 0;
signed char var_10 = (signed char)-61;
int var_11 = -728824629;
unsigned long long int var_12 = 1548906943478534693ULL;
unsigned char var_13 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
