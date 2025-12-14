#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6166793247669214256LL;
unsigned int var_2 = 929383019U;
unsigned short var_6 = (unsigned short)9967;
long long int var_7 = 7399466757596205977LL;
int var_10 = -634171180;
unsigned long long int var_12 = 6763133721248830134ULL;
int zero = 0;
int var_13 = -1807841637;
unsigned long long int var_14 = 12368383575474597654ULL;
unsigned char var_15 = (unsigned char)34;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
