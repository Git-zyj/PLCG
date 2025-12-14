#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5673;
unsigned int var_4 = 2047101362U;
int var_13 = -693201020;
unsigned int var_16 = 1715845383U;
int zero = 0;
unsigned int var_18 = 411582574U;
unsigned long long int var_19 = 6464262103522405768ULL;
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
