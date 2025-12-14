#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 967212874U;
short var_2 = (short)18307;
unsigned int var_3 = 2977245319U;
short var_8 = (short)-12964;
int zero = 0;
short var_10 = (short)2058;
unsigned long long int var_11 = 16018626792395493976ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
