#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3577325645U;
signed char var_6 = (signed char)-17;
unsigned int var_9 = 669553426U;
int zero = 0;
unsigned int var_11 = 2949801047U;
unsigned int var_12 = 3525718380U;
unsigned int var_13 = 912527536U;
void init() {
}

void checksum() {
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
