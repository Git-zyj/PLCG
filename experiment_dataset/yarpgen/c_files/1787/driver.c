#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8906491102852311469ULL;
unsigned short var_10 = (unsigned short)11342;
unsigned short var_15 = (unsigned short)55096;
int zero = 0;
unsigned long long int var_18 = 4171803715550236375ULL;
unsigned int var_19 = 2204672531U;
unsigned long long int var_20 = 3303754793627542657ULL;
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
